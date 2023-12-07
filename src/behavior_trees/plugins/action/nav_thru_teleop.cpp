#include <string>

#include "behavior_trees/plugins/action/nav_thru_teleop.cpp"

namespace nav2_behavior_tree
{
    
    TeleopAction::TeleopAction(
        const std::string & xml_tag_name,
        const std::string & action_name,
        const BT::NodeConfiguration & conf
    ) : BtActionNode<nav2_msgs::action::Teleop>(xml_tag_name, action_name, conf)

    {
        double teleop_time;
        getInput("teleop_time", teleop_time);

        goal_.time = rclpp::Duration::from_seconds(teleop_time);

    }

    void TeleopAction::on_tick()
    {
        if(is_teleop){
            command = "ros2 run turtlebot3_teleop teleop_keyboard";
            int result_1 = system(command.c_str());
        }

    }

}