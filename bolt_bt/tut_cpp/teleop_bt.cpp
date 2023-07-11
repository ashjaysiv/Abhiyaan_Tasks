#include <iostream>
#include <chrono>
#include "behaviortree_cpp/action_node.h"
#include "behaviortree_cpp/bt_factory.h"
#include <string>

using namespace std::chrono_literals;

BT::NodeStatus ChecktoStart()
{
    int key;
    std::cin>>key;
    if (key == 1)
    {
        std::cout<<"Key Entered"<<std::endl;
        std::string launch_file_path = "vikram.launch";
        std::string command = "roslaunch vikram_sim " + launch_file_path;
        int result = system(command.c_str());
        if (result == 0)
        {
            return BT::NodeStatus::SUCCESS;
        }
        else
        {
            return BT::NodeStatus::FAILURE;
        }

    }
    else
    {
        std::cout<<"Wrong Key"<<std::endl;
        return BT::NodeStatus::FAILURE;
    }  
};

int main()
{
    BT::BehaviorTreeFactory factory;
    factory.registerSimpleCondition("ChecktoStart", std::bind(ChecktoStart));
    auto tree = factory.createTreeFromFile("./../teleop.xml");
    
    tree.tickWhileRunning();
    return 0;
}