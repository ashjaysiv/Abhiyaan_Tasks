#include <iostream>
#include <chrono>
#include "behaviortree_cpp/action_node.h"
#include "behaviortree_cpp/bt_factory.h"
#include <string>

#include "/opt/ros/noetic/include/ros/ros.h"
#include "/opt/ros/noetic/include/std_msgs/String.h"

using namespace std::chrono_literals;


class CheckMoveBase
{
    public:
        static std::string status;

    CheckMoveBase() {}

    

    BT::NodeStatus check()
    {
        ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("move_base_status", 1000, &CheckMoveBase::Callback);
        
        std::cout<<status<<std::endl;
        
        if (status == "SUCCESS")
        {
            std::cout<<"Move Base Running"<<std::endl;
            return BT::NodeStatus::FAILURE;
        }
        else if(status == "FAILURE")
        {
            std::cout<<"Time to switch to Teleop"<<std::endl;
            return BT::NodeStatus::SUCCESS;
        }
        // else
        // {
        //     std::cout<<"Waiting"<<std::endl;
        //     return BT::NodeStatus::RUNNING;


        // }
        // ros::spin();
        ros::spin();
    };

    static void Callback(const std_msgs::String::ConstPtr& msg)
    {
    status = msg->data.c_str();
    }

};

std::string CheckMoveBase::status = "";





int main(int argc, char **argv)
{
    ros::init(argc, argv, "listener");


    BT::BehaviorTreeFactory factory;
    CheckMoveBase obj;
    // obj.setNode(argc, argv);
    factory.registerSimpleCondition("CheckMoveBase", std::bind(&CheckMoveBase::check, &obj));
    auto tree = factory.createTreeFromFile("/home/ashmitha/behavior_trees/bolt_bt/ros_bt_ws/src/movebase/src/move_base.xml");
    
    tree.tickWhileRunning();
    return 0;
}

