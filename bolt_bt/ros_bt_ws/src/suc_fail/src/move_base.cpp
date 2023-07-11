#include "/opt/ros/noetic/include/ros/ros.h"
#include "/opt/ros/noetic/include/std_msgs/String.h"


int main(int argc, char **argv)
{
    ros::init(argc, argv, "talker");
    ros::NodeHandle n;

    ros::Publisher move_base = n.advertise<std_msgs::String>("move_base_status", 1000);
    ros::Rate loop_rate(1);
    while(ros::ok())
    {

        std_msgs::String msg;
        for (int i = 0; i < 5; i++)
        {
            
            msg.data = "SUCCESS";
            ROS_INFO("%s", msg.data.c_str());
            move_base.publish(msg);
            loop_rate.sleep();
        };

        for (int i = 0; i < 5; i++)
        {
            msg.data = "FAILURE";
            ROS_INFO("%s", msg.data.c_str());
            move_base.publish(msg);
            loop_rate.sleep();
        };
        
        
    }

    
  

    return 0;





}