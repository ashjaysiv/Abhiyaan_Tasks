#include <iostream>
#include <chrono>
#include "behaviortree_cpp/action_node.h"
#include "behaviortree_cpp/bt_factory.h"
#include <string>
#include <move_base_msgs/MoveBaseActionFeedback.h>
#include <thread>
#include <cmath>
#include <geometry_msgs/Twist.h>

#include "/opt/ros/noetic/include/ros/ros.h"
#include "/opt/ros/noetic/include/std_msgs/String.h"

using namespace std::chrono_literals;

//------------------ MOVEBASE -------------------------//

class CheckMoveBase
{
    public:
        // current pose
        static long double pose_x_curr;
        static long double pose_x_prev;

        // pose 5 seconds ago (to check if the bot is stuck)
        static long double pose_y_curr;
        static long double pose_y_prev;
    CheckMoveBase() {}

    BT::NodeStatus check()
    {
        ros::NodeHandle n;
        ros::Subscriber sub = n.subscribe("/move_base/feedback", 1000, &CheckMoveBase::Callback);
        long double distance;

        while(ros::ok())
        {
            pose_x_prev = pose_x_curr;
            pose_y_prev = pose_y_curr;

            //wait 5 seconds before checking the next pose
            std::this_thread::sleep_for(std::chrono::seconds(5));
            ros::spinOnce();
            
            //calculate the distance between the robaot's current pose and the pose 5 seconds ago
            distance = std::sqrt((pose_x_prev - pose_x_curr)*(pose_x_prev - pose_x_curr) + (pose_y_prev - pose_y_curr)*(pose_y_prev - pose_y_curr));

            if (distance < 0.0012)
            {
                std::cout<<"Bot is stuck"<<std::endl;
                // returning success so that the next node teleop is activated
                return BT::NodeStatus::SUCCESS;
            }
        }
        
    
    };

    static void Callback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
    {
        
        pose_x_curr = msg->feedback.base_position.pose.position.x;
        pose_y_curr = msg->feedback.base_position.pose.position.y;
        
    }

};

long double CheckMoveBase::pose_x_curr;
long double CheckMoveBase::pose_x_prev;

long double CheckMoveBase::pose_y_curr;
long double CheckMoveBase::pose_y_prev;


//-----------------------TELEOP-------------------------------------//
class SwitchTeleop
{
    public:
    SwitchTeleop() {}

    BT::NodeStatus switched()
    {
        
        ros::NodeHandle n;
        ros::Publisher pub = n.advertise<actionlib_msgs::GoalID> ("/move_base/cancel", 1000);
        actionlib_msgs::GoalID msg;
        msg.id = "";
        ros::spinOnce();

        //cancels movebase
        pub.publish(msg);

        std::cout<<"Move Base Cancelled"<<std::endl;

        
        //launches teleop
        std::string launch_file_path = "vikram.launch";
        std::string command = "roslaunch vikram_sim " + launch_file_path;
        int result_1 = system(command.c_str());

        std::cout<<"Switched to teleop"<<std::endl;
        return BT::NodeStatus::SUCCESS;
    };

};

//---------------------CHECKEMERGENCYSTOP--------------------------//

BT::NodeStatus CheckEmergencyStop()
{
    int key;
    std::cin>>key;
    if (key == 1)
    {

        std::cout<<"Key to stop entered"<<std::endl;
        return BT::NodeStatus::SUCCESS;

    };
     
};

// --------------------STOP-----------------------//

class Stop
{
    public:
    Stop() {}

    BT::NodeStatus stop()
    {
        ros::NodeHandle n;
        ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/move_base/cancel", 1000);

        geometry_msgs::Twist msg;

        msg.linear.x = msg.linear.y = msg.linear.z = 0.0;
        msg.angular.x = msg.angular.y = msg.angular.z = 0.0;

        ros::spinOnce();
        pub.publish(msg);

        std::cout<<"Bot has been stopped"<<std::endl;
        return BT::NodeStatus::
        
    };

};

// ------------------------- MAIN ----------------------- //

int main(int argc, char **argv)
{
    CheckMoveBase obj_1;
    SwitchTeleop obj_2;
    Stop obj_3;
    ros::init(argc, argv, "listener");
    

    BT::BehaviorTreeFactory factory;

    factory.registerSimpleCondition("CheckMoveBase", std::bind(&CheckMoveBase::check, &obj_1));

    factory.registerSimpleAction("SwitchTeleop", std::bind(&SwitchTeleop::switched, &obj_2));

    factory.registerSimpleCondition("CheckEmergencyStop", std::bind(CheckEmergencyStop));

    factory.registerSimpleAction("Stop", std::bind(&Stop::stop, &obj_3));


    auto tree = factory.createTreeFromFile("/home/ashmitha/behavior_trees/bolt_bt/ros_bt_ws/src/movebase/src/move_base.xml");
    
    tree.tickWhileRunning();
    return 0;
}

