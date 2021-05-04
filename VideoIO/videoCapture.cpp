#include <opencv2/core.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <cstdio>

using namespace cv;
using namespace std;

int main(int argc, char **argv)
{
	Mat frame;
	VideoCapture cap;
	// open the default camera using default API
	// cap.open(0);
	// OR advance usage: select any API backend
	int deviceID = 0;    // 0 = open default camera 
	int apiID = cv::CAP_ANY;  // 0 = autodetect default API
	// open selected camera using selected API
	cap.open(deviceID, apiID);
	// check if we succeeded	
	if(!cap.isOpened()){
		cerr << "ERROR! unable to open camera " << endl;
		return(-1);
	}

	// Grab and write loop
	cout << "Start grabbing" << endl
		<< "Press any key to terminate" << endl;

	for(;;){
		// wait for a new frame from camera and store it into 'frame'
		cap.read(frame);
		// Check if we succeeded
		if(frame.empty()){
			cerr << "ERROR! blank frame grabbed" << endl;
			break;
		}
		// show live and wait for a key with timeout long enough to show images
		imshow("Live", frame);
		if(waitKey(5) >= 0) break;
	}
	
	return 0;
}
