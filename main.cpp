#include <iostream>
#include <opencv2/opencv.hpp>

int main() {
    std::cout << "Hello World!";

    auto filename = "C:/_Repos/OpenCV_example/images/pushup_example.jpg";
    auto image = cv::imread(filename);
    
    cv::imshow("Image", image);
    cv::waitKey();
    return 0;
}
