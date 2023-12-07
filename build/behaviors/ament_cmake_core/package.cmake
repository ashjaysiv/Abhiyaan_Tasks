set(_AMENT_PACKAGE_NAME "behaviors")
set(behaviors_VERSION "0.0.0")
set(behaviors_MAINTAINER "ashmitha <96778394+ashjaysiv@users.noreply.github.com>")
set(behaviors_BUILD_DEPENDS "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "nav2_behavior_tree" "nav2_util" "nav2_msgs" "msgs" "nav_msgs" "tf2" "tf2_geometry_msgs" "geometry_msgs" "nav2_costmap_2d" "nav2_core" "pluginlib")
set(behaviors_BUILDTOOL_DEPENDS "ament_cmake")
set(behaviors_BUILD_EXPORT_DEPENDS )
set(behaviors_BUILDTOOL_EXPORT_DEPENDS )
set(behaviors_EXEC_DEPENDS "rclcpp" "rclcpp_action" "rclcpp_lifecycle" "nav2_behavior_tree" "nav2_util" "nav2_msgs" "nav_msgs" "geometry_msgs" "nav2_costmap_2d" "nav2_core" "pluginlib")
set(behaviors_TEST_DEPENDS "ament_lint_auto" "ament_lint_common" "ament_cmake_gtest")
set(behaviors_GROUP_DEPENDS )
set(behaviors_MEMBER_OF_GROUPS )
set(behaviors_DEPRECATED "")
set(behaviors_EXPORT_TAGS)
list(APPEND behaviors_EXPORT_TAGS "<build_type>ament_cmake</build_type>")
list(APPEND behaviors_EXPORT_TAGS "<nav2_core plugin=\"behavior_plugin.xml\"/>")