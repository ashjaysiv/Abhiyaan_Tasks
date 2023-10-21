import rosbag
import cv2
from cv_bridge import CvBridge

# Define the path to your ROS bag file
# bag_file_path = './rosbags/2023-10-20-17-13-31.bag'
bag_file_path = './rosbags/2023-10-20-17-19-14.bag'


# Open the bag file
bag = rosbag.Bag(bag_file_path)

# Initialize the CvBridge
bridge = CvBridge()

# Define the topic from which you want to extract images
desired_topic = '/zed2i/zed_node/rgb/image_rect_color'

# # Define the output directory to save the images
output_directory = '/home/ashmitha/obstacles_manoever/data/'

i = 0
# # Iterate through the messages in the bag
for topic, msg, t in bag.read_messages(topics=[desired_topic]):
    if topic == desired_topic:
        if i % 5 == 0:
        
            # Convert the ROS image message to OpenCV image
            cv_image = bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")

            # Save the image
            image_name = f"image_{106 + i/5}.jpg"  # You can modify the name as per your requirement
            cv2.imwrite(output_directory + image_name, cv_image)
            
        
        i = i + 1

# Close the bag file
bag.close()
