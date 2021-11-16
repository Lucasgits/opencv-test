#include <opencv2/opencv.hpp>
#include <iostream>
// #include "g2l.cpp"
#include "l2g2.h"

using namespace cv;
using namespace std;

int func(int argc, char* argv[])
{ /*
	 double r = 0.225;
	//open the video file for reading
	VideoCapture cap("C:/Users/Lucas/Downloads/homer1.avi");
	VideoCapture cap2("C:/Users/Lucas/Downloads/homer1mirrored.avi");

	// if not success, exit program
	if (cap.isOpened() == false || cap2.isOpened() == false)
	{
		cout << "Cannot open the video file" << endl;
		cin.get(); //wait for any key press
		return -1;
	}

	//Uncomment the following line if you want to start the video in the middle
	//cap.set(CAP_PROP_POS_MSEC, 300); 

	//get the frames rate of the video
	double fps = cap.get(CAP_PROP_FPS);
	double fps2 = cap2.get(CAP_PROP_FPS);
	cout << "Frames per seconds : " << fps << endl;
	cout << "Frames per seconds : " << fps2 << endl;

	String window_name = "My First Video";
	String window_name2 = "My First Video2";

	namedWindow(window_name, WINDOW_NORMAL); //create a window

	while (true)
	{
		setWindowProperty(window_name, WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);
		Mat frame;
		Mat frame2; 
		bool bSuccess = cap.read(frame); // read a new frame from video 
		bool bSuccess2 = cap2.read(frame2); // read a new frame from video 
		
		//Breaking the while loop at the end of the video
		if (bSuccess == false || bSuccess2 == false)
		{
			cout << "Found the end of the video" << endl;
			break;
		}
		
		resize(frame, frame, Size(360, 360), INTER_LINEAR);
		resize(frame2, frame2, Size(360, 360), INTER_LINEAR);
		frame.convertTo(frame, CV_64FC3);
		frame2.convertTo(frame2, CV_64FC3);

		
		Mat3d ly1(360, 360);
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 360; j++) {
				 for (int k = 0; k < 360; k++) {
					 l2g(ly1.at<double>(i, j, k), frame.at<double>(i, j, k),i+1);
				 }
			 }
		 }


		int rows = max(frame.rows, frame2.rows);
		int cols = frame.cols + frame2.cols;
		Mat3b res(rows, cols, Vec3b(0, 0, 0));
		frame.copyTo(res(Rect(0, 0, frame.cols, frame.rows)));
		frame2.copyTo(res(Rect(frame.cols, 0, frame2.cols, frame2.rows)));

		

		//show the frame in the created window
		imshow(window_name, ly1);

		//wait for for 10 ms until any key is pressed.  
		//If the 'Esc' key is pressed, break the while loop.
		//If the any other key is pressed, continue the loop 
		//If any key is not pressed withing 10 ms, continue the loop
		if (waitKey(1000/fps) == 27)
		{
			cout << "Esc key is pressed by user. Stopping the video" << endl;
			break;
		}
	} */
	
	return 0;

}