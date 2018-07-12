#include "struct.h"

void test() {
	Mat M(3, 2, CV_8UC3, Scalar(0, 0, 255));
	M.create(6, 6, CV_8SC4);
	cout << M << endl;
	Mat Z = Mat::zeros(5,5,CV_32F);
	Mat O = Mat::ones(4,4,CV_32F);
	Mat E = Mat::eye(5,5,CV_32F);
	cout << Z << endl << O << endl << E << endl;
}