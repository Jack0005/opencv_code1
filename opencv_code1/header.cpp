#include "header.h"

int display() {
	Mat img = imread("./picture/0.jpg");
	imshow("ÏÔÊ¾Í¼Ïñ", img);
	waitKey(0);
	return 0;
}