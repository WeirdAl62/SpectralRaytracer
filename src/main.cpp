#include <iostream>


int main() {
    int   HEIGHT       = 1080;
    float ASPECT_RATIO = 16.0/9.0;
    int   WIDTH        = HEIGHT * ASPECT_RATIO;

    std::cout << "P3\n" << WIDTH << ' ' << HEIGHT << "\n255\n"; // Initialize PPM file
    return 0;
}