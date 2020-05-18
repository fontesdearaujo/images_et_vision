#include <stdio.h>
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main (int argc, char** argv){

	Mat R(2,2,CV_32FC1);
	int i, j, x, y;
	for (i=0; i<2; i++){
			for (j=0; j<2; j++){
			cin >> R.at<float>(i,j);
		}
	}
	cout << "\n";
	cout << R;
	cout << "\n";
	Mat R_Inv = R.inv();	
	cout << "\n";
	cout << R_Inv;
	cout << "\n";

	
	Point p(x,y);
	cout << "\nPoint\n";

	cin >>p.x;
	cin >>p.y;
	cout << "\n";
	cout << p; 
	
	Mat multi = R * 2; 
	cout << "\n";
	cout << multi; 
	
	}

