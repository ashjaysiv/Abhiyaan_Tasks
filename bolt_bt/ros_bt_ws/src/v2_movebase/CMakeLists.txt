cmake_minimum_required(VERSION 3.0.2)

project(v2_movebase)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(catkin REQUIRED
  roscpp
  std_msgs
  genmsg
)
find_package(behaviortree_cpp)




catkin_package()

include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(v2_movebase src/bt.cpp)
target_link_libraries(v2_movebase ${catkin_LIBRARIES})
target_link_libraries(${PROJECT_NAME} BT::behaviortree_cpp)












