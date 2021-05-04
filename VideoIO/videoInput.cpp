#include <iostream>
#include <string>
#include <iomanip> // For controlling float print precision
#include <sstream> // String to number conversion

#include <opencv2/core.hpp>  // Basic OpenCV structures (cv::Mat, Scalar)
#include <opencv2/imgproc.hpp> 	// Gaussian Blur
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>  // OpenCV window I/O

using namespace std;
using namespace cv;

static void help()
{
	cout  << "----------------------------------------------------------------" << endl
	      << " it shows how to read a video file with openCV. In addition," << endl
	      << " it tests the similarity of two input videos first with PSNR," << endl
	      << " and for the frames below a PSNR trigger value, also with MSSIM." << endl
	      << "   " << endl
	      << " Usage: ./readVideo.app  <referenceVideo> <useCaseTestVideo> <PSNR_Trigger_Value> <Wait_between_Frames> " << endl
	      << "----------------------------------------------------------------" << endl;
}

int main(int argc, char **argv)
{
	help();

	if( 5 != argc ){
		cerr << "Not enough parameters" << endl;
		return (-1);
	}

	stringstream conv;
	const string sourceReference = argv[1], sourceCompareWith = argv[2];
	int psnrTriggerValue, delay;
	conv << argv[3] << endl << argv[4];
	conv >> psnrTriggerValue >> delay;

	int frameNum = (-1); // Frame counter

	VideoCapture captRefnrc(sourceReference), capUndTst(sourceCompareWith);

	return 0;
}

