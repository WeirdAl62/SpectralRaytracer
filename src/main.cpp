#include <iostream>


int main() {
    int   HEIGHT       = 1080;
    float ASPECT_RATIO = 16.0/9.0;
    int   WIDTH        = HEIGHT * ASPECT_RATIO;

    std::cout << "P3\n" << WIDTH << ' ' << HEIGHT << "\n255\n"; // Initialize PPM file

    for (int pixelY = 0; pixelY < HEIGHT; pixelY++) {
        for (int pixelX = 0; pixelX < WIDTH; pixelX++) {
            int r = pixelX * 255.0 / WIDTH;
            int g = pixelY * 255.0 / HEIGHT;
            int b = 255;
            std::cout << r << ' ' << g << ' ' << b << '\n';
        }
    }
    return 0;
}