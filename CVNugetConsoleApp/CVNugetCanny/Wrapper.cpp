#include <opencv2/opencv.hpp>

using namespace cv;

// Convert GrayScale
cv::Mat cvtGray_wrapper(cv::Mat src) {
	cv::Mat dst;
	cv::cvtColor(src, dst, COLOR_RGB2GRAY);
	return dst;
}

// Canny Filter
cv::Mat Canny_wrapper(cv::Mat src, int low, int high) {
	cv::Mat dst;
	cv::Canny(src, dst, low, high);
	return dst;
}