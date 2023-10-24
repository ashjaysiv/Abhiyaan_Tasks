// // ROS core
// #include <ros/ros.h>

// //Image message
// #include <opencv2/highgui/highgui.hpp>
// #include <cv_bridge/cv_bridge.h>
// #include <sensor_msgs/image_encodings.h>
// #include <sensor_msgs/PointCloud2.h>
// #include <std_msgs/Float32MultiArray.h>

// //pcl::toROSMsg
// #include <pcl/io/pcd_io.h>
// #include <pcl/point_types.h>
// #include <pcl/visualization/pcl_visualizer.h>
// #include <pcl_conversions/pcl_conversions.h>

// #include <iostream>

// #include <Eigen/Dense>

// using namespace std;

// class DepthPcl{
// public:
//     DepthPcl() {}
//     ~DepthPcl() {}

//     void initDepthPcl(ros::NodeHandle& nh);

//     cv::Mat depth_pic;

//     typedef pcl::PointCloud<pcl::PointXYZ> PointCloud;

//     typedef std::shared_ptr<DepthPcl> Ptr;

//     typedef std::vector<float> bounding_box;

    


// private:
//     void depthCallback(const sensor_msgs::ImageConstPtr& depth_msg);

//     void stateCallback(const ros::TimerEvent& );

//     void bboxCallback(const std_msgs::Float32MultiArray& bbox_msg);

//     ros::NodeHandle node;

//     ros::Subscriber depth_cb;
//     ros::Publisher pointcloud_publisher;
//     ros::Timer state_timer_;

//     ros::Subscriber bbox;
// };

// void DepthPcl::initDepthPcl(ros::NodeHandle& nh){
//     node = nh;

//     depth_cb = node.subscribe<sensor_msgs::Image>("/barricade/depth_masked_image", 50, &DepthPcl::depthCallback, this);

//     pointcloud_publisher = node.advertise<sensor_msgs::PointCloud2>("/barricade/obstacle_points", 10);

//     state_timer_ = node.createTimer(ros::Duration(0.05), &DepthPcl::stateCallback, this);

//     bbox = node.subscribe<std_msgs::Float32MultiArray>("/barricade/bbox", 50, &DepthPcl::bboxCallback, this);
// }

// void DepthPcl::depthCallback(const sensor_msgs::ImageConstPtr& depth_msg) {
    

//     cv_bridge::CvImagePtr depth_ptr;
//     try
//     {
//         /* code */
//         //cv::imshow("depth_view", cv_bridge::toCvShare(depth_msg, sensor_msgs::image_encodings::TYPE_32FC1)->image);

//         depth_ptr = cv_bridge::toCvCopy(depth_msg, sensor_msgs::image_encodings::BGR8); 

//         //cv::waitKey();
//     }
//     catch(cv_bridge::Exception& e)
//     {
//         ROS_ERROR("Could not convert from '%s' to 'mono16'.", depth_msg->encoding.c_str());
//     }
//     depth_pic = depth_ptr->image;
// }

// void DepthPcl::bboxCallback(const std_msgs::Float32MultiArray& bbox_msg) {
    
//     bounding_box = bbox_msg.data;

// }

// void DepthPcl::stateCallback(const ros::TimerEvent& ){
//     sensor_msgs::PointCloud2 pub_pointcloud;
//     PointCloud::Ptr cloud_msg (new PointCloud);

//     /*

//     Zed's camera info : 
//     K: [190.54971313476562, 0.0, 95.29173278808594, 
//         0.0, 190.54971313476562, 53.00518798828125, 
//         0.0, 0.0, 1.0]

//     R: [1.0, 0.0, 0.0, 
//         0.0, 1.0, 0.0, 
//         0.0, 0.0, 1.0]
    
//     P: [190.54971313476562, 0.0, 95.29173278808594, 0.0, 
//         0.0, 190.54971313476562, 53.00518798828125, 0.0, 
//         0.0, 0.0, 1.0, 0.0]  

//     frame_id: "zed2i_left_camera_optical_frame"    

//     OR,

//     K: [265.56085205078125, 0.0, 320.9938049316406, 
//         0.0, 265.56085205078125, 183.0654296875, 
//         0.0, 0.0, 1.0]

//     OR,
    
//     K: [948.6073608398438, 0.0, 633.8572998046875, 
//         0.0, 948.6073608398438, 352.9658508300781, 
//         0.0, 0.0, 1.0]
    
//     */

//     // Use correct principal point && focal length from calibration
//     //DEFAULT VALUES OF THIS CODE :
//     // const double camera_factor = 1;
//     // const double camera_cx = 320;
//     // const double camera_cy = 180;
//     // const double camera_fx = 320;
//     // const double camera_fy = 180;

//     const double camera_factor = 1;
//     const double camera_cx = 633.8585205078125;
//     const double camera_cy = 352.9649963378906;
//     const double camera_fx = 947.3107299804688;
//     const double camera_fy = 947.3107299804688;

//     // Traverse the depth image 
//     for (int v = 0; v < depth_pic.rows; ++v)
//     {
//         for (int u = 0; u < depth_pic.cols; ++u)
//         {
//             float d = depth_pic.ptr<float>(v)[u];

//             // Check for invalid measurements
//             if (d == 0)
//                 continue;
//             // if d has a value, add a point to the point cloud 

//             pcl::PointXYZ pt;

//             // Fill in XYZ
//             pt.z = double(d) / camera_factor;
//             pt.x = (u - camera_cx) * pt.z / camera_fx;
//             pt.y = (v - camera_cy) * pt.z / camera_fy;

//             // add p to the point cloud 
//             cloud_msg->points.push_back(pt);
//         }
//     }

//     cloud_msg->height   = 1;
//     cloud_msg->width    = cloud_msg->points.size();
//     cloud_msg->is_dense = false;

//     // converting a PCL point cloud to a ROS PCL message
//     pcl::toROSMsg(*cloud_msg, pub_pointcloud);
//     pub_pointcloud.header.frame_id = "base_link";
//     pub_pointcloud.header.stamp = ros::Time(0);

//     // Publishing our cloud image
//     pointcloud_publisher.publish(pub_pointcloud);

//     // cloud_msg->points.clear();
// }

// int main(int argc, char** argv)
// {
//     ros::init(argc, argv, "masked_pointcloud");
//     ros::NodeHandle node("~");
    
//     ROS_INFO("Masked pointcloud started publishing. . .");
//     DepthPcl::Ptr depth_pcl;

//     depth_pcl.reset(new DepthPcl);
//     depth_pcl->initDepthPcl(node);

//     ros::Duration(1.0).sleep();
//     ros::spin();

//     return 0;
// }

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



// sensor_msgs::Image depth_image;
cv::Mat depth_image;
std_msgs::Float32MultiArray bounding_box;
ros::Publisher cloud_pub;

using namespace std;


void bboxCallback(const std_msgs::Float32MultiArray::ConstPtr& box){

    // camera params
    const double camera_factor = 1;
    const double camera_cx = 633.8585205078125;
    const double camera_cy = 352.9649963378906;
    const double camera_fx = 947.3107299804688;
    const double camera_fy = 947.3107299804688;

    //  if object and bbox detected
    if(!box->data.empty() && depth_image.rows!=0)
    {
        // bounding box coords
        int x_max = box->data[2];
        int x_min = box->data[0];
        int y_max = box->data[3];
        int y_min = box->data[1];

        





        sensor_msgs::PointCloud2 cloud_msg;

        pcl::PointCloud<pcl::PointXYZ> pcl_cloud;
        pcl::PointXYZ point;

        // get pt cloud
        for (int v =y_min ; v < y_max; ++v)
        {
            for (int u = x_min; u < x_max; ++u)
            {
                float d = depth_image.ptr<float>(v)[u];

                // Check for invalid measurements
                if (d == 0)
                    continue;
                // if d has a value, add a point to the point cloud 
                pcl::PointXYZ pt;

                // Fill in XYZ
                pt.z = double(d) / camera_factor;
                pt.x = (u - camera_cx) * pt.z / camera_fx;
                pt.y = (v - camera_cy) * pt.z / camera_fy;

                // add p to the point cloud 
                pcl_cloud.push_back(pt);
            }
        }

        pcl::toROSMsg(pcl_cloud, cloud_msg);


        cloud_msg.header.stamp = ros::Time::now();
        cloud_msg.header.frame_id = "base_link";

        cloud_pub.publish(cloud_msg);

    }


}

// get depth image

void depthCallback(const sensor_msgs::Image::ConstPtr& img){
    
    cv_bridge::CvImagePtr depth_ptr;

    depth_ptr = cv_bridge::toCvCopy(img, sensor_msgs::image_encodings::BGR8);
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
