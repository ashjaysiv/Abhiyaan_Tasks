cmake_minimum_required(VERSION 3.0.2)
project(suc_fail)


find_package(catkin REQUIRED roscpp std_msgs genmsg)
generate_messages(DEPENDENCIES std_msgs)
catkin_package()

###########
## Build ##
###########

## Specify additional locations of header files
## Your package locations should be listed before other locations
include_directories(include ${catkin_INCLUDE_DIRS})



add_executable(talker src/move_base.cpp)
target_link_libraries(talker ${catkin_LIBRARIES})
# add_dependencies(talker beginner_tutorials_generate_messages_cpp)
