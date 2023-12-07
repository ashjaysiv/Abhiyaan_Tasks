#ifndef NAV2_BEHAVIORS_PLUGINS_TELEOP_HPP_
#define NAV2_BEHAVIORS_PLUGINS_TELEOP_HPP_

#include <chrono>
#include <memory>
#include <string>
#include <map>


#include "geometry_msgs/msg/twist.hpp"
#include "std_msgs/msg/empty.hpp"
#include "behaviors/timed_behavior.hpp"

// our custom action from the .action file in msgs package
#include <msgs/action/teleop.hpp>

namespace nav2_behaviors
{
    // alias 
    using TeleopAction = msgs::action::Teleop;

    class Teleop : public TimedBehavior<TeleopAction>
    {


        public:

            using TeleopActionGoal = TeleopAction::Goal;
            using TeleopActionResult = TeleopAction::Result;
            Teleop();

            Status onRun(const std::shared_ptr<const TeleopActionGoal> command) override;


            Status onCycleUpdate() override;


        protected:

            void onConfigure() override;           

            void preemptTeleopCallback(const std_msgs::msg::Empty::SharedPtr msg);

            TeleopAction::Feedback::SharedPtr feedback_;

            int getch(void);
            float vel_check(float curr, bool decrease = false);
            float Lvel(char key, float x);
            float Avel(char key, float th);


            // parameters
            double projection_time_;
            double simulation_time_step_;

            // Init Variables
            float speed = 0.5; // Linear velocity (m/s)
            float turn = 1.0; // Angular velocity (rad/s)
            float x, y, z, th; // Forward/backward/neutral direction vars
            char key = ' ';

            bool preempt_teleop_{false};
            geometry_msgs::msg::Twist teleop_twist_;

            // subscribers
            // rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr vel_sub_;
            rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub_;
            rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr preempt_teleop_sub_;

            rclcpp::Duration command_time_allowance_{0, 0};
            rclcpp::Time end_time_;

              // Map for movement keys
            std::map<char, std::vector<float>> moveBindings
            {
            {'i', {1, 0, 0, 0}},
            {'o', {1, 0, 0, -1}},
            {'j', {0, 0, 0, 1}},
            {'l', {0, 0, 0, -1}},
            {'u', {1, 0, 0, 1}},
            {',', {-1, 0, 0, 0}},
            {'.', {-1, 0, 0, 1}},
            {'m', {-1, 0, 0, -1}},
            {'O', {1, -1, 0, 0}},
            {'I', {1, 0, 0, 0}},
            {'J', {0, 1, 0, 0}},
            {'L', {0, -1, 0, 0}},
            {'U', {1, 1, 0, 0}},
            {'<', {-1, 0, 0, 0}},
            {'>', {-1, -1, 0, 0}},
            {'M', {-1, 1, 0, 0}},
            {'t', {0, 0, 1, 0}},
            {'b', {0, 0, -1, 0}},
            {'k', {0, 0, 0, 0}},
            {'K', {0, 0, 0, 0}}
            };
            
            // Map for speed keys
            std::map<char, std::vector<float>> speedBindings
            {
            {'q', {1.1, 1.1}},
            {'z', {0.9, 0.9}},
            {'w', {1.1, 1}},
            {'x', {0.9, 1}},
            {'e', {1, 1.1}},
            {'c', {1, 0.9}}
            };





        // CostmapInfoType getResourceInfo() override{return CostmapInfoType::LOCAL;}


    };
}

#endif
