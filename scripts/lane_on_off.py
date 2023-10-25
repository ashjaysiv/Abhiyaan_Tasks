import rospy
from std_msgs.msg import Bool

class Lane_switch:
    def __init__(self):
        self.current_stat = Bool()
        self.prev_stat = Bool()

    def callback(self, object_status):

        
        lane_switch = rospy.Publisher("/lane_cost_map_topic",  ) # add topic and message type
        rospy.init_node("lane_switch")
        # rate 
        if object_status.data:
            lane_switch.publish() # publish message which will trun off the lane cost map
            rospy.sleep(15)
            lane_switch.publish() # publish message which will trun on the lane cost map
            
    def lane_on_off(self):
        rospy.init_node('object_msg_receiver')
        rospy.Subscriber("/object_pressence_bool", Bool, self.callback)
        rospy.spin()



if __name__ == '__main__':
    try:
        l = Lane_switch()
        l.lane_on_off()
    
    except rospy.ROSInitException:
        pass