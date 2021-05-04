OPENCV_PATH = -I/usr/include/opencv4/opencv -I/usr/include/opencv4 -lopencv_dnn -lopencv_gapi -lopencv_highgui -lopencv_ml -lopencv_objdetect -lopencv_photo -lopencv_stitching -lopencv_video -lopencv_calib3d -lopencv_features2d -lopencv_flann -lopencv_videoio -lopencv_imgcodecs -lopencv_imgproc -lopencv_core

all:
	g++  -o readVideo.app  videoInput.cpp $(OPENCV_PATH)
	g++  -o captureVideo.app videoCapture.cpp $(OPENCV_PATH)

