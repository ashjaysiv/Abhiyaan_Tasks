#ifndef NAV2_BEHAVIOR_TREE_PLUGINS_ACTION_TELEOP_HPP_
#define NAV2_BEHAVIOR_TREE_PLUGINS_ACTION_TELEOP_HPP_

#include <string>

#include "nav2_behavior_tree/bt_action_node.hpp"
#include "msgs/action/teleop.hpp"

namespace nav2_behavior_tree
{
    class TeleopAction : public BtActionNode<nav2_msgs::action::Teleop>
    {
        public:
        
        TeleopAction(
            const std::string & xml_tag_name,
            const std::string & action_name,
            const BT::NodeConfiguration & conf
        );

        void on_tick() override;

        static BT::PortList providedPorts()
        {
            return providedBasicPorts(
                {
                    BT::InputPort<double>("teleop_time", 5.0, "Time allowed to teleop");
                }
            );
        }

        private:
        bool is_teleop;


    };
}
#endif