#include "header.h"

int display() {
	Mat img = imread("./picture/0.jpg");
	imshow("��ʾͼ��", img);
	waitKey(0);
	return 0;
}