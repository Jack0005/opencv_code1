#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;

int main() {
	Mat img = imread("E:\\code\\0.jpg");
	imshow("��ʾͼ��",img);
	waitKey(0);
	return 0;
}