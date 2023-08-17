#include <iostream>
#include <chrono>
#include "behaviortree_cpp/action_node.h"
#include "behaviortree_cpp/bt_factory.h"


#include <string>
#include <move_base_msgs/MoveBaseActionFeedback.h>
#include <move_base_msgs/MoveBaseActionGoal.h>
#include <actionlib_msgs/GoalStatusArray.h>
#include <thread>
#include <cmath>
#include <geometry_msgs/Twist.h>
#include <string>

#include "/opt/ros/noetic/include/ros/ros.h"
#include "/opt/ros/noetic/include/std_msgs/String.h"

namespace chr = std::chrono;

// ----------------------- Check if goal received

class ReceiveGoal : public BT::StatefulActionNode
    {
        public:
            ReceiveGoal(const std::string& name, const BT::NodeConfig& config) : StatefulActionNode(name, config)
            {}

            static BT::PortsList providedPorts()
            {
                return {};
            }

            static void Callback(const actionlib_msgs::GoalStatusArray::ConstPtr& msg)
            {
                status = msg->status_list[0].text;
            }
 
            BT::NodeStatus onStart() override;

            BT::NodeStatus onRunning() override;

            void onHalted() override;
        
        private:
            static std::string status;
            ros::Subscriber sub;
            ros::NodeHandle n;           


    };

    std::string ReceiveGoal::status;
  

    BT::NodeStatus ReceiveGoal::onStart()
    {
        sub = n.subscribe<actionlib_msgs::GoalStatusArray>("/move_base/status", 1000, &ReceiveGoal::Callback);
        return BT::NodeStatus::RUNNING;
    }

    BT::NodeStatus ReceiveGoal::onRunning()
    {
        ros::spinOnce();

        if (status == "This goal has been accepted by the simple action server")
        {
            sub.shutdown();
            ROS_INFO("GOAL RECEIVED");
            return BT::NodeStatus::SUCCESS;
        }
        else
        {
            return BT::NodeStatus::FAILURE;
        }  

        
    }


    void ReceiveGoal::onHalted() {}

// ----------------------- Check if goal reached

class ReachGoal : public BT::StatefulActionNode
    {
        public:
            ReachGoal(const std::string& name, const BT::NodeConfig& config) : StatefulActionNode(name, config)
            {}

            static BT::PortsList providedPorts()
            {
                return {};
            }

            static void Callback(const actionlib_msgs::GoalStatusArray::ConstPtr& msg)
            {

                status = msg->status_list[0].text;
            }
 
            BT::NodeStatus onStart() override;

            BT::NodeStatus onRunning() override;

            void onHalted() override;
        
        private:
            static std::string status;
            ros::Subscriber sub;
            ros::NodeHandle n;           


    };

    std::string ReachGoal::status;
  

    BT::NodeStatus ReachGoal::onStart()
    {
        sub = n.subscribe<actionlib_msgs::GoalStatusArray>("/move_base/status", 1000, &ReachGoal::Callback);
        
        return BT::NodeStatus::RUNNING;
        
    }

    BT::NodeStatus ReachGoal::onRunning()
    {
        
        ros::spinOnce();
        if (status == "Goal reached.")
        {
            ROS_INFO("GOAL REACHED");
            return BT::NodeStatus::SUCCESS;
        }
        else
        {
            return BT::NodeStatus::FAILURE;
        }  

    }


    void ReachGoal::onHalted(){}


//----------------------Move base

struct Pose2D
{
    double x, y;
};


class MoveBase : public BT::StatefulActionNode
    {
        public:
            MoveBase(const std::string& name, const BT::NodeConfig& config, int tick_count, Pose2D prev_pose) : StatefulActionNode(name, config), tick_count_(tick_count), prev_pose_(prev_pose)
            {}

            static BT::PortsList providedPorts()
            {
                return {};
            }

            static void Callback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
            {
                curr_pose.x = msg->feedback.base_position.pose.position.x;
                curr_pose.y = msg->feedback.base_position.pose.position.y;
            }
 
            BT::NodeStatus onStart() override;

            BT::NodeStatus onRunning() override;

            void onHalted() override;
        
        private:
            static Pose2D curr_pose;
            ros::Subscriber sub;
            ros::NodeHandle n;    
            Pose2D prev_pose_;
            int32_t tick_count_;  

    };

    Pose2D MoveBase::curr_pose;

    BT::NodeStatus MoveBase::onStart()
    {
        sub = n.subscribe<move_base_msgs::MoveBaseActionFeedback>("/move_base/feedback", 1000, &MoveBase::Callback);
        return BT::NodeStatus::RUNNING;
        
    }

    BT::NodeStatus MoveBase::onRunning()
    {        

        tick_count_++;

        // check if time has passed
        if (tick_count_ >= 600)
        {

            // spin to get the current pose
            double duration = 0.1;  
            double start_time = ros::Time::now().toSec();

            while (ros::ok())
            {
                if (ros::Time::now().toSec() - start_time >= duration)
                {
                    break;
                }
                ros::spinOnce();
            }

            long double distance;
            distance = std::sqrt((prev_pose_.x - curr_pose.x)*(prev_pose_.x - curr_pose.x) + (prev_pose_.y - curr_pose.y)*(prev_pose_.y - curr_pose.y));

            prev_pose_ = curr_pose;

            //  restart tick count and set the value3
            tick_count_ = 0;

            // check if bot is stuck
            if (distance < 1.5)
            {
                ROS_INFO("BOT STUCK");
                return BT::NodeStatus::SUCCESS;
            }
            else
            {
                return BT::NodeStatus::FAILURE;
            }

        }

        else
        {
            return BT::NodeStatus::FAILURE;
        }
        
        
    }

    void MoveBase::onHalted() {}

//-----------------------------Switch Teleop
class SwitchTeleop
{
    public:
    SwitchTeleop() {}

    BT::NodeStatus switched()
    {
        //stop movebase
        ros::NodeHandle nh;

        ros::Publisher cancel_pub = nh.advertise<actionlib_msgs::GoalID>("/move_base/cancel", 10);
        ros::Rate loop_rate(10); 

        actionlib_msgs::GoalID cancel_msg;
        
        cancel_msg.id = "";

        double duration = 1.0;  
        double start_time = ros::Time::now().toSec();

        while (ros::ok())
        {
            if (ros::Time::now().toSec() - start_time >= duration)
            {
                break;
            }

            cancel_pub.publish(cancel_msg);
            ros::spinOnce();
            loop_rate.sleep();
        }

        //launches teleop
        std::string launch_file_path = "vikram.launch";
        std::string command = "roslaunch vikram_sim " + launch_file_path;
        int result_1 = system(command.c_str());

        ROS_INFO("TELEOP LAUNCHED");
        return BT::NodeStatus::SUCCESS;
    };

};

//----------------Emergency Stop

class EmergencyStop : public BT::StatefulActionNode
    {
        public:
            EmergencyStop(const std::string& name, const BT::NodeConfig& config) : StatefulActionNode(name, config)
            {}

            static BT::PortsList providedPorts()
            {
                return {};
            }

            static void Callback(const std_msgs::String::ConstPtr& msg)
            {
                
                if (msg->data == "stop")
                {
                    stop = true;
                }
            }
 
            BT::NodeStatus onStart() override;

            BT::NodeStatus onRunning() override;

            void onHalted() override;
        
        private:
            static bool stop;
            ros::Subscriber sub;
            ros::NodeHandle n;           

    };

    bool EmergencyStop::stop;


    BT::NodeStatus EmergencyStop::onStart()
    {


        sub = n.subscribe("/stop", 1000, &EmergencyStop::Callback);
        ros::spinOnce();
        if (stop)
        {
            return BT::NodeStatus::RUNNING;
        }
        else
        {
            return BT::NodeStatus::FAILURE;
        }                       
        
    }

    BT::NodeStatus EmergencyStop::onRunning()
    {
        ROS_INFO("EMERGENCY STOP!");

        ros::NodeHandle nh;

        ros::Publisher cancel_pub = nh.advertise<actionlib_msgs::GoalID>("/move_base/cancel", 10);
        ros::Rate loop_rate(10); 

        actionlib_msgs::GoalID cancel_msg;
        
        cancel_msg.id = "";

        double duration = 1.0;  
        double start_time = ros::Time::now().toSec();

        while (ros::ok())
        {
            if (ros::Time::now().toSec() - start_time >= duration)
            {
                break;
            }

            cancel_pub.publish(cancel_msg);
            ros::spinOnce();
            loop_rate.sleep();
        }

        return BT::NodeStatus::SUCCESS;
    }

    void EmergencyStop::onHalted() {}

// -----------------Main

int main(int argc, char **argv)
{
    BT::BehaviorTreeFactory factory;

    ros::init(argc, argv, "receive_goal");

    SwitchTeleop tele_obj;

    Pose2D init_;
    init_.x = 0.0;
    init_.y = 0.0;

    factory.registerNodeType<ReceiveGoal>("ReceiveGoal");
    factory.registerNodeType<ReachGoal>("ReachGoal");

    factory.registerNodeType<MoveBase>("MoveBase", 0, init_);
    factory.registerSimpleAction("SwitchTeleop", std::bind(&SwitchTeleop::switched, &tele_obj));
    factory.registerNodeType<EmergencyStop>("EmergencyStop");


    auto tree = factory.createTreeFromFile("/home/ashmitha/behavior_trees/bolt_bt/ros_bt_ws/src/movebase/src/tree.xml");

    tree.tickWhileRunning();
}

