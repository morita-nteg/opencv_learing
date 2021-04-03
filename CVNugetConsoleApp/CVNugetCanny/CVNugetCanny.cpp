// CVNugetCanny.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include "Wrapper.h"

using namespace cv;

int main()
{
    std::cout << "Canny" << std::endl;
 
    auto img = cv::imread("test.png");
    auto img_gray = cvtGray_wrapper(img); // GrayScale
    auto img_canny = Canny_wrapper(img_gray, 100, 100);

    cv::imwrite("canny.png", img_canny); // Save image
    cv::imshow("Canny", img_canny); // Show image
    cv::waitKey(0);

    return 0;
}

