#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

	Mat DrawPoints(Mat gray){
		int x;
		int y;
		int bar_x =0;
		int bar_y =0;
		int i; 
		Point P;
		
		for (i=0; i<4; i++){
			P = Point(x,y);
			cin >> P.x >> P.y;
			bar_x += P.x;
			bar_y += P.y;
			circle(gray, P , 1 , CV_RGB(255,255,255), 2);
		}
		P.x = bar_x/4;
		P.y = bar_y/4;
		circle(gray, P , 1 , CV_RGB(0,255,0), 2);
		return gray;
		}

	Mat CroixRouge(Mat gray){
				
		    line(gray, Point(30,20), Point(30, 40), Scalar( 0, 0, 255 ),  2, 8 ); // vertical
			line(gray, Point(20,30), Point(40, 30), Scalar( 0, 0, 255 ),  2, 8 ); // horizontal
			
		return gray;
		}
	
	Mat Quadrilatere(Mat gray){
			
		return gray;
	}
	
	Mat Lissage(Mat gray){
	for (int i=1; i<51; i=i+2)
   { 
      GaussianBlur( gray, gray, Size( i, i ), 0, 0 );
   }
      return gray;
}		
	
	
	
int main (int argc, char** argv)
{
	Mat img;
	img = imread("lena.jpg");  
	Mat gray;
	cvtColor(img, gray, COLOR_BGR2GRAY);

	//chama funcao
	gray = Lissage(img);
	
	namedWindow("Image - Lena", WINDOW_AUTOSIZE);
	imshow("Image - Lena", gray);
	waitKey(0);
	
}
