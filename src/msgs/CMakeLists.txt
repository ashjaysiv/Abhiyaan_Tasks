cmake_minimum_required(VERSION 3.5)
project(msgs)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(nav2_common REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(action_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)


nav2_package()

add_compile_options(-Wno-error=deprecated)

rosidl_generate_interfaces(${PROJECT_NAME}
  "action/Teleop.action"
  DEPENDENCIES builtin_interfaces std_msgs action_msgs
)

ament_export_dependencies(rosidl_default_runtime)

ament_package()

