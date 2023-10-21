import torch

model = torch.hub.load('../yolov5', 'custom', path='../model_weights/weights.pt', force_reload=True, source='local')
