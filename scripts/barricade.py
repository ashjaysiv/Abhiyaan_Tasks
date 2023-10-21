#!/usr/bin/python3


from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import torch
from std_msgs.msg import Bool
import cv2
import rospy
from ultralytics import YOLO



class Barricades:
    def __init__(self):

# Load a model
        # model = YOLO("yolov8n.yaml")  # build a new model from scratch
        # model = YOLO("../model_weights/best (2).pt")
        model = torch.hub.load('ultralytics/yolov5', 'custom', path='../model_weights/weights.pt')

        self.model = model
    
    def callback(self, img):

        try:
            bridge = CvBridge()
            image = bridge.imgmsg_to_cv2(img, "bgr8")
        except Exception as e:
            print(e)

        bool_publisher = rospy.Publisher("/object_pressence_bool", Bool, queue_size=10) # add topic and message type
        output_publisher = rospy.Publisher("/detected_object", Image, queue_size=10) # add topic and message type
        
        message = Bool()
        
        output = self.model(image)

        bounding_boxes = output.xyxy[0].cpu().numpy()



        for box in bounding_boxes:
            x_min, y_min, x_max, y_max, confidence, class_id = box 


            if confidence > 0.6:
                message.data = True

                cv2.rectangle(image, (int(x_min), int(y_min)), (int(x_max), int(y_max)), (0, 255, 0), 2)
                ros_image = bridge.cv2_to_imgmsg(image, encoding="bgr8")

                bool_publisher.publish(message)
                output_publisher.publish(ros_image)

            else:
                message.data = False
                ros_image = bridge.cv2_to_imgmsg(image, encoding="bgr8")

                bool_publisher.publish(message)
                output_publisher.publish(ros_image)
            
    def detect_barricade(self):
        rospy.init_node('image input')
        rospy.Subscriber('/zed2i/zed_node/rgb/image_rect_color', Image, self.callback)
        rospy.spin()



if __name__ == '__main__':
    try:
        b = Barricades()
        b.detect_barricade()
    
    except rospy.ROSInitException:
        pass


