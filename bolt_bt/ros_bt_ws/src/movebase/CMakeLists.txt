cmake_minimum_required(VERSION 3.0.2)

project(movebase)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  std_msgs
  genmsg
)
find_package(behaviortree_cpp)




catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(movebase src/move_base.cpp)
target_link_libraries(movebase ${catkin_LIBRARIES})
target_link_libraries(${PROJECT_NAME} BT::behaviortree_cpp)












