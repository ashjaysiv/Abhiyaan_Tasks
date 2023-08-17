# Behavior Tree

LOCATION OF BT PACKAGE: Abhiyaan_Tasks/bolt_bt/ros_bt_ws/src/movebase

- This behaviour tree consists of the following nodes:
1. ReceiveGoal: Checks if goal is received
2. ReachGoal: Checks if the goal has been reached
3. EmergencyStop: Check if Estop has been called
4. MoveBase: Checks if the bot is stuck at one place for too long
5. SwitchTeleop: It cancels movebase and moves to manual operation through teleop 

## Instructions for Launching and Usage

- Open a terminal and source the "ros_bt_ws"
- Run "roslaunch vikram_sim combined.launch" to launch the simulation
- Open another terminal source the "ros_bt_ws"
- Launch rviz and configure it with "vik.rviz" in "vikram_nav"
- Give a goal before launch the bt (Segmentation fault arises for the first time, later it will wait for the subsequent goals to be received)
- Run the behaviour tree using "rosrun movebase movebase"
- To activate Estop use: "rostopic pub /stop std_msgs/String "data: 'stop'""

