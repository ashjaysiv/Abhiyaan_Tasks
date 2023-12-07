// Copyright (c) 2018 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef NAV2_BEHAVIORS__TIMED_BEHAVIOR_HPP_
#define NAV2_BEHAVIORS__TIMED_BEHAVIOR_HPP_

#include <stdio.h>
#include <unistd.h>
#include <termios.h>

#include <cstdint>
#include <memory>
#include <string>
#include <cmath>
#include <chrono>
#include <ctime>
#include <thread>
#include <utility>

#include "rclcpp/rclcpp.hpp"
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/create_timer_ros.h"
#include "geometry_msgs/msg/twist.hpp"
#include "nav2_util/simple_action_server.hpp"
#include "nav2_util/robot_utils.hpp"
#include "nav2_core/recovery.hpp"
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#include "tf2/utils.h"
#pragma GCC diagnostic pop


namespace nav2_behaviors
{

enum class Status : int8_t
{
  SUCCEEDED = 1,
  FAILED = 2,
  RUNNING = 3,
};

// struct ResultStatus
// {
//   Status status;
//   uint16_t error_code{0};
// };

using namespace std::chrono_literals;  //NOLINT

/**
 * @class nav2_behaviors::Behavior
 * @brief An action server Behavior base class implementing the action server and basic factory.
 */
template<typename ActionT>
class TimedBehavior : public nav2_core::Recovery
{
public:
  using ActionServer = nav2_util::SimpleActionServer<ActionT>;

  /**
   * @brief A TimedBehavior constructor
   */
  TimedBehavior()
  : action_server_(nullptr),
    cycle_frequency_(10.0),
    enabled_(false)
  {
  }

  virtual ~TimedBehavior() {}

  // Derived classes can override this method to catch the command and perform some checks
  // before getting into the main loop. The method will only be called
  // once and should return SUCCEEDED otherwise behavior will return FAILED.
  virtual Status onRun(const std::shared_ptr<const typename ActionT::Goal> command) = 0;


  // This is the method derived classes should mainly implement
  // and will be called cyclically while it returns RUNNING.
  // Implement the behavior such that it runs some unit of work on each call
  // and provides a status. The Behavior will finish once SUCCEEDED is returned
  // It's up to the derived class to define the final commanded velocity.
  virtual Status onCycleUpdate() = 0;

  // an opportunity for derived classes to do something on configuration
  // if they chose
  virtual void onConfigure()
  {
  }

  // an opportunity for derived classes to do something on cleanup
  // if they chose
  virtual void onCleanup()
  {
  }


  // configure the server on lifecycle setup
  virtual void configure(
    const rclcpp_lifecycle::LifecycleNode::SharedPtr & parent,
    const std::string & name, std::shared_ptr<tf2_ros::Buffer> tf,
    std::shared_ptr<nav2_costmap_2d::CostmapTopicCollisionChecker> collision_checker) override
  {
    node_ = parent;

    RCLCPP_INFO(node_->get_logger(), "Configuring %s", name.c_str());

    behavior_name_ = name;
    tf_ = tf;

    node_->get_parameter("cycle_frequency", cycle_frequency_);
    node_->get_parameter("global_frame", global_frame_);
    node_->get_parameter("robot_base_frame", robot_base_frame_);
    node_->get_parameter("transform_tolerance", transform_tolerance_);

  

    double action_server_result_timeout;

    action_server_ = std::make_shared<ActionServer>(
      node_, behavior_name_,
      std::bind(&TimedBehavior::execute, this));

    collision_checker_ = collision_checker;

    vel_pub_ = node_->template create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 1);

    onConfigure();
  }

  // Cleanup server on lifecycle transition
  void cleanup() override
  {
    action_server_.reset();
    vel_pub_.reset();
    onCleanup();
  }

  // Activate server on lifecycle transition
  void activate() override
  {
    RCLCPP_INFO(node_->get_logger(), "Activating %s", behavior_name_.c_str());

    vel_pub_->on_activate();
    enabled_ = true;
  }

  // Deactivate server on lifecycle transition
  void deactivate() override
  {
    vel_pub_->on_deactivate();
    enabled_ = false;
  }

protected:
  rclcpp_lifecycle::LifecycleNode::SharedPtr node_;

  std::string behavior_name_;
  rclcpp_lifecycle::LifecyclePublisher<geometry_msgs::msg::Twist>::SharedPtr vel_pub_;
  std::shared_ptr<ActionServer> action_server_;
  std::shared_ptr<nav2_costmap_2d::CostmapTopicCollisionChecker> collision_checker_;
  std::shared_ptr<tf2_ros::Buffer> tf_;

  double cycle_frequency_;
  double enabled_;
  std::string global_frame_;
  std::string robot_base_frame_;
  double transform_tolerance_;

  // Clock
  rclcpp::Clock steady_clock_{RCL_STEADY_TIME};


  // Main execution callbacks for the action server implementation calling the Behavior's
  // onRun and cycle functions to execute a specific behavior
  void execute()
  {
    RCLCPP_INFO(node_->get_logger(), "Running %s", behavior_name_.c_str());

    if (!enabled_) {
      RCLCPP_WARN(
        node_->get_logger(),
        "Called while inactive, ignoring request.");
      return;
    }

    // Initialize the ActionT result
    auto result = std::make_shared<typename ActionT::Result>();

    Status on_run_result = onRun(action_server_->get_current_goal());
    if (on_run_result != Status::SUCCEEDED) {
      RCLCPP_INFO(
        node_->get_logger(),
        "Initial checks failed for %s", behavior_name_.c_str());
      action_server_->terminate_current(result);
      return;
    }

    auto timer = node_->create_wall_timer(
      1s,
      [&]() {RCLCPP_INFO(node_->get_logger(), "%s running...", behavior_name_.c_str());});

    auto start_time = steady_clock_.now();
    rclcpp::WallRate loop_rate(cycle_frequency_);

    while (rclcpp::ok()) {
      if (action_server_->is_cancel_requested()) {
        RCLCPP_INFO(node_->get_logger(), "Canceling %s", behavior_name_.c_str());
        stopRobot();
        result->total_elapsed_time = steady_clock_.now() - start_time;
        action_server_->terminate_all(result);
        return;
      }

      // TODO(orduno) #868 Enable preempting a Behavior on-the-fly without stopping
      if (action_server_->is_preempt_requested()) {
        RCLCPP_ERROR(
          node_->get_logger(), "Received a preemption request for %s,"
          " however feature is currently not implemented. Aborting and stopping.",
          behavior_name_.c_str());
        stopRobot();
        result->total_elapsed_time = steady_clock_.now() - start_time;
        action_server_->terminate_current(result);
        return;
      }

      switch (onCycleUpdate()) {
        case Status::SUCCEEDED:
          RCLCPP_INFO(
            node_->get_logger(),
            "%s completed successfully", behavior_name_.c_str());
          result->total_elapsed_time = steady_clock_.now() - start_time;
          action_server_->succeeded_current(result);
          return;

        case Status::FAILED:
          RCLCPP_WARN(node_->get_logger(), "%s failed", behavior_name_.c_str());
          result->total_elapsed_time = steady_clock_.now() - start_time;
          action_server_->terminate_current(result);
          return;

        case Status::RUNNING:

        default:
          loop_rate.sleep();
          break;
      }
    }
  }

  // Stop the robot with a commanded velocity
  void stopRobot()
  {
    auto cmd_vel = std::make_unique<geometry_msgs::msg::Twist>();
    cmd_vel->linear.x = 0.0;
    cmd_vel->linear.y = 0.0;
    cmd_vel->angular.z = 0.0;

    vel_pub_->publish(std::move(cmd_vel));
  }
};

}  // namespace nav2_behaviors

#endif  // NAV2_BEHAVIORS__TIMED_BEHAVIOR_HPP_