#!/usr/bin/python3

from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import torch
from std_msgs.msg import Bool
import cv2
import rospy
# from yolov5.models import YOLO
from ultralytics import YOLO
import numpy as np
from std_msgs.msg import Float32MultiArray


class Barricades:
    def __init__(self):

# Load a model
        # model = YOLO("yolov8n.yaml")  # build a new model from scratch
        # model = YOLO("../model_weights/best (2).pt")
        # model = torch.hub.load('ultralytics/yolov5', 'custom', path='../model_weights/weights.pt')
        self.model = YOLO('/home/ashmitha/catkin_ws/src/bolt/model_weights/weights1.pt')

        self.bool_publisher = rospy.Publisher("/barricade/object_pressence_bool", Bool, queue_size=10) # add topic and message type
        self.output_publisher = rospy.Publisher("/barricade/detected_object", Image, queue_size=10) # add topic and message type
        self.box_publisher = rospy.Publisher("/barricade/bbox", Float32MultiArray, queue_size=10)
    
    def callback(self, img):

        try:
            bridge = CvBridge()
            image = bridge.imgmsg_to_cv2(img, "bgr8")
        except Exception as e:
            print(e)

        
        message = Bool()
        
        output = self.model.predict(image)



        if output[0].boxes:
            self.bbox_overlay(output)

            for pred in output:
                box = pred.boxes.xyxy
                box = np.array(box[0])
                confidence = pred.boxes.conf
                
                x_min, y_min, x_max, y_max = box[0], box[1], box[2], box[3]

                for conf in confidence:
                    if conf > 0.6:
                        message.data = True

                        cv2.rectangle(image, (int(x_min), int(y_min)), (int(x_max), int(y_max)), (0, 255, 0), 2)
                
                ros_image = bridge.cv2_to_imgmsg(image, encoding="bgr8")

                self.bool_publisher.publish(message)
                self.output_publisher.publish(ros_image)

        else:
            message.data = False
            ros_image = bridge.cv2_to_imgmsg(image, encoding="bgr8")

            self.bool_publisher.publish(message)
            self.output_publisher.publish(ros_image)
            
    def bbox_overlay(self, result):
        
        box_msg = Float32MultiArray()
        
        for pred in result:
            box = pred.boxes.xyxy
            box = np.array(box[0])
            confidence = pred.boxes.conf

            for conf in confidence:
                if conf > 0.6:
                    box_msg.data = box
                    self.box_publisher.publish(box_msg)

                
               

    
    def detect_barricade(self):
        rospy.init_node('barricade_image_input')
        rospy.Subscriber('/zed2i/zed_node/rgb/image_rect_color', Image, self.callback)
        # rospy.Subscriber('/zed2i/zed_node/depth/depth_registered')
        rospy.spin()



if __name__ == '__main__':
    try:
        b = Barricades()
        b.detect_barricade()
    
    except rospy.ROSInitException:
        pass


