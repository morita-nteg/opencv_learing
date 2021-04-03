// Nuget による OpenCV 4.x の設定例
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    std::cout << "This is an example." << std::endl;
    auto input_image = cv::imread("test.png");

    if (!input_image.empty()) {
        cv::namedWindow("show image", cv::WINDOW_AUTOSIZE | cv::WINDOW_FREERATIO);
        cv::imshow("show image", input_image);
        cv::waitKey(0);
    }
    else {
        std::cerr << "test.png : not found" << std::endl;
    }

    return 0;
}

