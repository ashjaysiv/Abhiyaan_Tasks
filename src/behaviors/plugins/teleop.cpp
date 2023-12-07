#include <utility>
#include <map>

#include "behaviors/plugins/teleop.hpp"
#include "nav2_util/node_utils.hpp"
#include <msgs/action/teleop.hpp>

using nav2_behaviors::TimedBehavior;

namespace nav2_behaviors
{
    Teleop::Teleop()
    : TimedBehavior<TeleopAction>(),
    feedback_(std::make_shared<TeleopAction::Feedback>()) {}

    int getch(void)
    {
        int ch;
        struct termios oldt;
        struct termios newt;

        // Store old settings, and copy to new settings
        tcgetattr(STDIN_FILENO, &oldt);
        newt = oldt;

        // Make required changes and apply the settings
        newt.c_lflag &= ~(ICANON | ECHO);
        newt.c_iflag |= IGNBRK;
        newt.c_iflag &= ~(INLCR | ICRNL | IXON | IXOFF);
        newt.c_lflag &= ~(ICANON | ECHO | ECHOK | ECHOE | ECHONL | ISIG | IEXTEN);
        newt.c_cc[VMIN] = 1;
        newt.c_cc[VTIME] = 0;
        tcsetattr(fileno(stdin), TCSANOW, &newt);

        // Get the current character
        ch = getchar();

        // Reapply old settings
        tcsetattr(STDIN_FILENO, TCSANOW, &oldt);

        return ch;
    }

        // Function to check speed is in the range or not
        // Used to linearly increase/decrease the speed
    float vel_check(float curr, bool decrease = false)
    {
        if (decrease)
            curr = (curr >= -0.95) ? curr-0.05 : -1;
        else
            curr = (curr <= 0.95) ? curr+0.05 : 1;
        return curr;
    }

        // Linear vel for arrow keys
    float Lvel(char key, float x)
    {
        if(key=='A')
            return vel_check(x,false);
        if(key=='B')
            return vel_check(x,true);
        return 0;
        }
        // Angular vel for arrow keys
    float Teleop::Avel(char key, float th){
        if(key=='C')
            return vel_check(th,true);
        if(key=='D')
            return vel_check(th,false);
        return 0;
    }


    // Configure REQD
    void Teleop::onConfigure()
    {
        // Reminder message
        const char* msg = R"(
        Reading from the keyboard and Publishing to Twist!
        ---------------------------
        Moving around:
        u    i    o
        j    k    l
        m    ,    .
        For Holonomic mode (strafing), hold down the shift key:
        ---------------------------
        U    I    O
        J    K    L
        M    <    >
        ---------------------------
        Simple Teleoperation with arrow keys
                ⇧
                ⇦   ⇨
                ⇩

                A
                D   C
                B

        ---------------------------
        t : up (+z)
        b : down (-z)
        s/S : stop
        q/z : increase/decrease max speeds by 10%
        w/x : increase/decrease only linear speed by 10%
        e/c : increase/decrease only angular speed by 10%
        NOTE : Increasing or Decreasing will take affect live on the moving robot.
            Consider Stopping the robot before changing it.
        CTRL-C to quit
        THIS IS A EXACT REPLICA OF https://github.com/ros-teleop/teleop_twist_keyboard 
        WITH SOME ADD-ONS BUT IMPLEMENTED WITH C++ and ROS2-foxy.
        )";

        printf("%s", msg);
        printf("\nNow top Speed is %f and turn is %f | Last command: \n", speed, turn);


        // set params
        nav2_util::declare_parameter_if_not_declared(
            node_,
            "projection_time", rclcpp::ParameterValue(1.0)
        );

        nav2_util::declare_parameter_if_not_declared(
            node_,
            "simulation_time_step", rclcpp::ParameterValue(0.1)
        );

        nav2_util::declare_parameter_if_not_declared(
            node_,
            "cmd_vel_teleop", rclcpp::ParameterValue(std::string("cmd_vel_teleop"))
        );

        // from xml 
        node_->get_parameter("projection_time", projection_time_);
        node_->get_parameter("simulation_time_step", simulation_time_step_);

        std::string cmd_vel_teleop;
        node_->get_parameter("cmd_vel_teleop", cmd_vel_teleop);

        // vel_pub_ = node_->create_publisher<geometry_msgs::msg::Twist>(
        //     cmd_vel_teleop, rclcpp::SystemDefaultsQoS()
        //     );

        preempt_teleop_sub_ = node_->create_subscription<std_msgs::msg::Empty>(
            "preempt_teleop", rclcpp::SystemDefaultsQoS(),
            std::bind(
                &Teleop::preemptTeleopCallback, this, std::placeholders::_1
            )
        );
    }

    Status Teleop::onRun(const std::shared_ptr<const TeleopAction::Goal> command)
    {
        preempt_teleop_ = false;
        command_time_allowance_ = command->time;
        end_time_ = steady_clock_.now() + command_time_allowance_;
        return Status::SUCCEEDED;
    }


    Status Teleop::onCycleUpdate()
    {
        auto start_time = steady_clock_.now();
        feedback_->time_left = steady_clock_.now() - start_time;
        action_server_->publish_feedback(feedback_);

        rclcpp::Duration time_remaining = end_time_ - steady_clock_.now();

        geometry_msgs::msg::Twist twist;

        key = getch();

        if(key=='A'||key=='B'){
            x = Lvel(key, x);
            y = 0.0;
            z = 0.0;
            printf("\rCurrent: speed %f\tturn %f | Last command: %c   ", speed*x, turn*th, key);
        }

            //'C' and 'D' represent the Right and Left arrow keys consecutively 
        else if(key=='C'||key=='D')
        {
            th = Avel(key,th);
            y = 0.0;
            z = 0.0;
            printf("\rCurrent: speed %f\tturn %f | Last command: %c   ", speed*x, turn*th, key);
        }

        else if (moveBindings.count(key) == 1)
        {
            // Grab the direction data
            x = moveBindings[key][0];
            y = moveBindings[key][1];
            z = moveBindings[key][2];
            th = moveBindings[key][3];

            printf("\rCurrent: speed %f\tturn %f | Last command: %c   ", speed, turn, key);
        } 
            // Otherwise if it corresponds to a key in speedBindings
        else if (speedBindings.count(key) == 1)
        {
            // Grab the speed data
            speed = speed * speedBindings[key][0];
            turn = turn * speedBindings[key][1];

            printf("\nNow top Speed is %f and turn is %f | Last command: %c \n\t\tCurrent speed might be affected\n", speed, turn, key);
        }

            // Otherwise, set the robot to stop
        else
        { 
            if (key=='s'||key=='S')
            {
                x = 0;
                y = 0;
                z = 0;
                th = 0;
                printf("\n\t\tRobot Stopped..!! \n");
                printf("\rCurrent: speed %f\tturn %f | Last command: %c   ", speed*x, turn*th, key);
            }
        }

        // Update the Twist message
        twist.linear.x = x * speed;
        twist.linear.y = y * speed;
        twist.linear.z = z * speed;

        twist.angular.x = 0;
        twist.angular.y = 0;
        twist.angular.z = th * turn;

        


        if (time_remaining.seconds() < 0.0 && command_time_allowance_.seconds() > 0.0) 
        {
            stopRobot();
            RCLCPP_WARN_STREAM(
            node_->get_logger(),
            "Exceeded time allowance before reaching the " << behavior_name_.c_str() <<
                "goal - Exiting " << behavior_name_.c_str());
            return Status::FAILED;
        }

        if (preempt_teleop_) 
        {
            stopRobot();
            return Status::SUCCEEDED;
        }

        geometry_msgs::msg::PoseStamped current_pose;
        if (!nav2_util::getCurrentPose(
            current_pose, *tf_, global_frame_, robot_base_frame_,
            transform_tolerance_))
        {
            RCLCPP_ERROR_STREAM(
            node_->get_logger(),
            "Current robot pose is not available for " <<
                behavior_name_.c_str());
            return Status::FAILED;
        }

        vel_pub_->publish(std::move(twist));

        return Status::RUNNING;
    }

    void Teleop::preemptTeleopCallback(const std_msgs::msg::Empty::SharedPtr)
    {
        preempt_teleop_ = true;
    }
    
}

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(nav2_behaviors::Teleop, nav2_core::Recovery)
