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

struct Pose2D
{
    double x, y;
};

namespace chr = std::chrono;

class ReceiveGoal : public BT::StatefulActionNode
    {
        public:
            ReceiveGoal(const std::string& name, const BT::NodeConfig& config, int argc, char **argv) : StatefulActionNode(name, config)
            {}

            static BT::PortsList providedPorts()
            {
                return (BT::OutputPort<Pose2D>("goal"));
            }

            void Callback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
            {
                goal.x = msg->feedback.base_position.pose.position.x;
                goal.y = msg->feedback.base_position.pose.position.y;
            }

            BT::NodeStatus onStart()
            {
                std::cout<<"Subscribing to topic"<<std::endl;
                ros::NodeHandle n;
                ros::Subscriber sub = n.subscribe<move_base_msgs::MoveBaseActionFeedback>("/move_base/goal", 1000, &ReceiveGoal::Callback);

                if (!goal.x)
                {
                    std::cout<<"NO GOAL SET"<<std::endl;
                    return BT::NodeStatus::FAILURE;
                }
        
                setOutput("goal", goal);
                std::cout<<"GOAL SET"<<std::endl;
                return BT::NodeStatus::SUCCESS;
            }

            void onHalted()
            {
                std::cout<<"ABORTED"<<std::endl;
            }
        
        private:
            chr::system_clock::time_point _completion_time;
            Pose2D goal;
    };

int main(int argc, char **argv)
{
    BT::BehaviorTreeFactory factory;
    ros::init(argc, argv, "behaviour_tree");

    factory.registerNodeType<ReceiveGoal>("ReceiveGoal");
    auto tree = factory.createTreeFromFile("/home/ashmitha/behavior_trees/bolt_bt/ros_bt_ws/src/v2_movebase/src/tree.xml");

    tree.tickOnce();

}