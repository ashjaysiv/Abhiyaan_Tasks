#include <ros/ros.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl_ros/point_cloud.h>
#include <ros/console.h>
#include <std_msgs/Float32MultiArray.h>
#include <sensor_msgs/Image.h>
#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl_conversions/pcl_conversions.h>
#include <Eigen/Dense>
#include <cmath>



// sensor_msgs::Image depth_image;
cv::Mat depth_image;
std_msgs::Float32MultiArray bounding_box;
ros::Publisher cloud_pub;

using namespace std;


void bboxCallback(const std_msgs::Float32MultiArray::ConstPtr& box){

    // camera params
    const double camera_factor = 1;
    const double camera_cx = 1096.736328125;
    const double camera_cy = 610.860107421875;
    const double camera_fx = 1898.732666015625;
    const double camera_fy = 1898.732666015625;

    //  if object and bbox detected
    if(!box->data.empty() && depth_image.rows!=0)
    {
        // bounding box coords in image world
        int x_max = box->data[2];
        int x_min = box->data[0];
        int y_max = box->data[3];
        int y_min = box->data[1];

        int radius = 300; // measure barrel later

        // center of bbox in image world
        int x_center = (x_max+x_min)/2;
        int y_center = (y_max+y_min)/2;
        
        //depth in image world
        float d = depth_image.ptr<float>((y_center))[x_center];

        double y_proj = (double(d) / camera_factor) + radius; // y - coord in real wolrd

        float x_proj = (x_center - camera_cx) * y_proj / camera_fx; // x - coord in real world
        // float y_proj = (y_center - camera_cy) * depth / camera_fy;


        sensor_msgs::PointCloud2 cloud_msg;


        pcl::PointCloud<pcl::PointXYZ> pcl_cloud;
       

        pcl::PointXYZ pt;
        pt.x = x_proj;
        pt.y = y_proj;
        pt.z = 0;
        pcl_cloud.push_back(pt);


        // for (int x = -300; x < 300; ++x)
        // {
        //     pcl::PointXYZ pt1;
        //     pcl::PointXYZ pt2;

            
        //     pt1.z = y_proj + sqrt(radius*radius - (x-x_proj)*(x-x_proj) );
        //     pt2.z = y_proj - sqrt(radius*radius - (x-x_proj)*(x-x_proj) );

        //     pt1.x = x;
        //     pt2.x = x;

        //     pt1.y = 0;
        //     pt2.y = 0;

        //     pcl_cloud.push_back(pt1);
        //     pcl_cloud.push_back(pt2);


        // }

        

        // get pt cloud
        // for (int v =y_min ; v < y_max; ++v)
        // {
        //     for (int u = x_min; u < x_max; ++u)
        //     {
        //         float d = depth_image.ptr<float>(v)[u];

        //         // Check for invalid measurements
        //         if (d == 0)
        //             continue;
        //         // if d has a value, add a point to the point cloud 
        //         pcl::PointXYZ pt;

        //         // Fill in XYZ
        //         pt.z = double(d) / camera_factor;
        //         pt.x = (u - camera_cx) * pt.z / camera_fx;
        //         pt.y = (v - camera_cy) * pt.z / camera_fy;

        //         // add p to the point cloud 
        //         pcl_cloud.push_back(pt);
        //     }
        // }

        pcl::toROSMsg(pcl_cloud, cloud_msg);


        cloud_msg.header.stamp = ros::Time::now();
        cloud_msg.header.frame_id = "zed2i_left_camera_optical_frame";

        cloud_pub.publish(cloud_msg);

    }


}

// get depth image

void depthCallback(const sensor_msgs::Image::ConstPtr& img){
    
    cv_bridge::CvImagePtr depth_ptr;

    depth_ptr = cv_bridge::toCvCopy(img, sensor_msgs::image_encodings::TYPE_32FC1);
    depth_image = depth_ptr->image;
    
}



int main(int argc, char **argv) {

    ros::init(argc, argv, "barrel_to_cloud");

    ros::NodeHandle n;

    // Publishers
    cloud_pub = n.advertise<sensor_msgs::PointCloud2>("/barricade/cloud", 1000);
    ros::Rate loop_rate(50);
    
    // Subscribers
    ros::Subscriber depth_image = n.subscribe<sensor_msgs::Image>("/zed2i/zed_node/depth/depth_registered", 50, depthCallback);
    ros::Subscriber bbox = n.subscribe<std_msgs::Float32MultiArray>("/barricade/bbox", 50, bboxCallback);

    ros::spin();


}
