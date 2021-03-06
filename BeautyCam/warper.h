#ifndef WARPER_H
#define WARPER_H

#include <opencv.hpp>

using namespace cv;

class Warper {
public:
	void bilinearInsert(Mat src, Mat &img, double ux, double uy, int x, int y);
	Mat localTranslationWarp(Mat src, int startX, int startY, int endX, int endY, double radius);
	Mat localScalingWarp(Mat src, int centerX, int centerY, double radius, double radio);
};

#endif
