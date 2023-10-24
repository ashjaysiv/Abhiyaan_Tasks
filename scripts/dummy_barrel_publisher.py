#!/usr/bin/python3

import rospy
import cv2
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
        

if __name__ == "__main__":
    depth_image_path = "../depth_image.jpeg"
    normal_image_path = "../normal_image.jpg"

    


    rospy.init_node("image_publisher")
    depth_publisher = rospy.Publisher("/zed2i/zed_node/depth/depth_registered", Image, queue_size=10)
    rgb_publisher = rospy.Publisher('/zed2i/zed_node/rgb/image_rect_color', Image, queue_size=10)

    bridge = CvBridge()

    rate = rospy.Rate(10)

    while not rospy.is_shutdown():
        depth_image = cv2.imread(depth_image_path)
        normal_image = cv2.imread(normal_image_path)

        depth_image = bridge.cv2_to_imgmsg(depth_image, "bgr8")
        rgb_image = bridge.cv2_to_imgmsg(normal_image, "bgr8")

        depth_publisher.publish(depth_image)
        rgb_publisher.publish(rgb_image)

        rate.sleep()