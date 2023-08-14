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
                return {BT::InputPort<std::string>("goal_status")};
            }

            static void Callback(const actionlib_msgs::GoalStatusArray::ConstPtr& msg)
            {
                std::cout<<"receive goal Callback Called"<<std::endl;
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
        std::cout<<"Subscribing to topic for Receive Goal"<<std::endl;
        sub = n.subscribe<actionlib_msgs::GoalStatusArray>("/move_base/status", 1000, &ReceiveGoal::Callback);
        
        return BT::NodeStatus::RUNNING;
        
    }

    BT::NodeStatus ReceiveGoal::onRunning()
    {
        
        ros::spinOnce();

        if (status == "This goal has been accepted by the simple action server")
        {
            sub.shutdown();
            std::cout << "GOAL SET" << std::endl;
            return BT::NodeStatus::SUCCESS;
        }
        else
        {
            return BT::NodeStatus::RUNNING;
        }  

        
    }


    void ReceiveGoal::onHalted()
    {
        std::cout<<"ABORTED"<<std::endl;
    }

// ----------------------- Check if goal reached

class ReachGoal : public BT::StatefulActionNode
    {
        public:
            ReachGoal(const std::string& name, const BT::NodeConfig& config) : StatefulActionNode(name, config)
            {}

            static BT::PortsList providedPorts()
            {
                return {BT::InputPort<std::string>("goal_reach_status")};
            }

            static void Callback(const actionlib_msgs::GoalStatusArray::ConstPtr& msg)
            {
                std::cout<<"Reach Goal callback"<<std::endl;

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
        std::cout<<"Subscribing to topic for Reach Goal"<<std::endl;
        sub = n.subscribe<actionlib_msgs::GoalStatusArray>("/move_base/status", 1000, &ReachGoal::Callback);
        
        return BT::NodeStatus::RUNNING;
        
    }

    BT::NodeStatus ReachGoal::onRunning()
    {
        
        ros::spinOnce();

        if (status == "Goal reached.")
        {
            std::cout << "Goal reached" << std::endl;
            return BT::NodeStatus::SUCCESS;
        }
        else
        {
            return BT::NodeStatus::FAILURE;
        }  

        
    }


    void ReachGoal::onHalted()
    {
        std::cout<<"ABORTED"<<std::endl;
    }


//----------------------Move base

struct Pose2D
{
    double x, y;
};

class MoveBase : public BT::StatefulActionNode
    {
        public:
            MoveBase(const std::string& name, const BT::NodeConfig& config) : StatefulActionNode(name, config)
            {}

            static BT::PortsList providedPorts()
            {
                return {BT::InputPort<std::string>("move_status")};
            }

            static void Callback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
            {
                std::cout << "movebase callback " << std::endl;
                
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

    };

    Pose2D MoveBase::curr_pose;

    BT::NodeStatus MoveBase::onStart()
    {
        std::cout<<"Subscribing to topic"<<std::endl;

        ros::NodeHandle n;
        ros::Subscriber sub = n.subscribe("/move_base/feedback", 1000, &MoveBase::Callback);
        
        return BT::NodeStatus::RUNNING;
        
    }

    BT::NodeStatus MoveBase::onRunning()
    {
        std::cout<<"Move Base"<<std::endl;

        long double distance;
        Pose2D prev_pose;
        
        prev_pose = curr_pose;

        // std::this_thread::sleep_for(std::chrono::seconds(10));
        ros::Duration(20.0).sleep();
        ros::spinOnce();


        if (distance < 0.0012)
        {
            std::cout<<"Bot is stuck"<<std::endl;
            // returning success so that the next node teleop is activated
            return BT::NodeStatus::SUCCESS;
        }
        else
        {
            return BT::NodeStatus::FAILURE;
        }
    }

    void MoveBase::onHalted()
    {
        std::cout<<"ABORTED"<<std::endl;
    }

//-----------------------------Switch Teleop
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

//----------------Emergency Stop

class EmergencyStop : public BT::StatefulActionNode
    {
        public:
            EmergencyStop(const std::string& name, const BT::NodeConfig& config) : StatefulActionNode(name, config)
            {}

            static BT::PortsList providedPorts()
            {
                return {BT::InputPort<std::string>("exit_status")};
            }

            static void Callback(const std_msgs::String::ConstPtr& msg)
            {
                std::cout<<msg->data<<std::endl;
                std::cout << "estop callback" << std::endl;
                
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
            std::cout<<"time to stop"<<std::endl;
            return BT::NodeStatus::RUNNING;
        }
        else
        {
            return BT::NodeStatus::FAILURE;
        }                       
        
    }

    BT::NodeStatus EmergencyStop::onRunning()
    {
        std::cout<<"Emergency stop"<<std::endl;

        ros::NodeHandle n;
        ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/cmd_vel", 1000);

        geometry_msgs::Twist msg;

        msg.linear.x = msg.linear.y = msg.linear.z = 0.0;
        msg.angular.x = msg.angular.y = msg.angular.z = 0.0;

        ros::spinOnce();
        pub.publish(msg);

        std::cout<<"Bot has been stopped"<<std::endl;
        return BT::NodeStatus::FAILURE;

    }

    void EmergencyStop::onHalted()
    {
        std::cout<<"ABORTED"<<std::endl;
    }

int main(int argc, char **argv)
{
    BT::BehaviorTreeFactory factory;

    ros::init(argc, argv, "receive_goal");

    SwitchTeleop tele_obj;



    factory.registerNodeType<ReceiveGoal>("ReceiveGoal");
    factory.registerNodeType<ReachGoal>("ReachGoal");

    factory.registerNodeType<MoveBase>("MoveBase");
    factory.registerSimpleAction("SwitchTeleop", std::bind(&SwitchTeleop::switched, &tele_obj));
    factory.registerNodeType<EmergencyStop>("EmergencyStop");

    

    auto tree = factory.createTreeFromFile("/home/ashmitha/behavior_trees/bolt_bt/ros_bt_ws/src/v2_movebase/src/tree.xml");

    // ros::AsyncSpinner spinner(1);
    // spinner.start();

    // BT::NodeStatus status = tree.rootNode()->executeTick();
    tree.tickWhileRunning();

    // spinner.stop();


}



// #include <iostream>
// #include <chrono>
// #include "behaviortree_cpp/action_node.h"
// #include "behaviortree_cpp/bt_factory.h"
// #include <string>
// #include <move_base_msgs/MoveBaseActionFeedback.h>
// #include <thread>
// #include <cmath>
// #include <geometry_msgs/Twist.h>

// #include "/opt/ros/noetic/include/ros/ros.h"
// #include "/opt/ros/noetic/include/std_msgs/String.h"

// using namespace std::chrono_literals;

// //------------------ MOVEBASE -------------------------//

// class CheckMoveBase
// {
//     public:
//         // current pose
//         static long double pose_x_curr;
//         static long double pose_x_prev;

//         // pose 5 seconds ago (to check if the bot is stuck)
//         static long double pose_y_curr;
//         static long double pose_y_prev;
//     CheckMoveBase() {}

//     BT::NodeStatus check()
//     {
//         ros::NodeHandle n;
//         ros::Subscriber sub = n.subscribe("/move_base/feedback", 1000, &CheckMoveBase::Callback);
//         long double distance;

//         while(ros::ok())
//         {
//             pose_x_prev = pose_x_curr;
//             pose_y_prev = pose_y_curr;

//             //wait 5 seconds before checking the next pose
//             std::this_thread::sleep_for(std::chrono::seconds(5));
//             ros::spinOnce();
            
//             //calculate the distance between the robaot's current pose and the pose 5 seconds ago
//             distance = std::sqrt((pose_x_prev - pose_x_curr)*(pose_x_prev - pose_x_curr) + (pose_y_prev - pose_y_curr)*(pose_y_prev - pose_y_curr));

//             if (distance < 0.0012)
//             {
//                 std::cout<<"Bot is stuck"<<std::endl;
//                 // returning success so that the next node teleop is activated
//                 return BT::NodeStatus::SUCCESS;
//             }
//         }
        
    
//     };

//     static void Callback(const move_base_msgs::MoveBaseActionFeedback::ConstPtr& msg)
//     {
        
//         pose_x_curr = msg->feedback.base_position.pose.position.x;
//         pose_y_curr = msg->feedback.base_position.pose.position.y;
        
//     }

// };

// long double CheckMoveBase::pose_x_curr;
// long double CheckMoveBase::pose_x_prev;

// long double CheckMoveBase::pose_y_curr;
// long double CheckMoveBase::pose_y_prev;


// //-----------------------TELEOP-------------------------------------//
// class SwitchTeleop
// {
//     public:
//     SwitchTeleop() {}

//     BT::NodeStatus switched()
//     {
        
//         ros::NodeHandle n;
//         ros::Publisher pub = n.advertise<actionlib_msgs::GoalID> ("/move_base/cancel", 1000);
//         actionlib_msgs::GoalID msg;
//         msg.id = "";
//         ros::spinOnce();

//         //cancels movebase
//         pub.publish(msg);

//         std::cout<<"Move Base Cancelled"<<std::endl;

        
//         //launches teleop
//         std::string launch_file_path = "vikram.launch";
//         std::string command = "roslaunch vikram_sim " + launch_file_path;
//         int result_1 = system(command.c_str());

//         std::cout<<"Switched to teleop"<<std::endl;
//         return BT::NodeStatus::SUCCESS;
//     };

// };

// //---------------------CHECKEMERGENCYSTOP--------------------------//

// BT::NodeStatus CheckEmergencyStop()
// {
//     int key;
//     std::cin>>key;
//     if (key == 1)
//     {

//         std::cout<<"Key to stop entered"<<std::endl;
//         return BT::NodeStatus::SUCCESS;

//     };
     
// };

// // --------------------STOP-----------------------//

// class Stop
// {
//     public:
//     Stop() {}

//     BT::NodeStatus stop()
//     {
//         ros::NodeHandle n;
//         ros::Publisher pub = n.advertise<geometry_msgs::Twist>("/move_base/cancel", 1000);

//         geometry_msgs::Twist msg;

//         msg.linear.x = msg.linear.y = msg.linear.z = 0.0;
//         msg.angular.x = msg.angular.y = msg.angular.z = 0.0;

//         ros::spinOnce();
//         pub.publish(msg);

//         std::cout<<"Bot has been stopped"<<std::endl;
//         return BT::NodeStatus::SUCCESS;
        
//     };

// };

// // ------------------------- MAIN ----------------------- //

// int main(int argc, char **argv)
// {
//     CheckMoveBase obj_1;
//     SwitchTeleop obj_2;
//     Stop obj_3;
//     ros::init(argc, argv, "listener");
    

//     BT::BehaviorTreeFactory factory;

//     factory.registerSimpleCondition("CheckMoveBase", std::bind(&CheckMoveBase::check, &obj_1));

//     factory.registerSimpleAction("SwitchTeleop", std::bind(&SwitchTeleop::switched, &obj_2));

//     factory.registerSimpleCondition("CheckEmergencyStop", std::bind(CheckEmergencyStop));

//     factory.registerSimpleAction("Stop", std::bind(&Stop::stop, &obj_3));


//     auto tree = factory.createTreeFromFile("/home/ashmitha/behavior_trees/bolt_bt/ros_bt_ws/src/movebase/src/move_base.xml");
    
//     tree.tickWhileRunning();
//     return 0;
// }

