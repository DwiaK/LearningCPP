#include <iostream>
#include <string>

// Getting the offset of a variable in memory

struct Vector3
{
    float x, y, z;
};

int main()
{
    int offsetX = (int)& ((Vector3*)nullptr)->x; // getting the offset of x
    int offsetY = (int)&((Vector3*)nullptr)->y; // getting the offset of y
    int offsetZ = (int)&((Vector3*)nullptr)->z; // getting the offset of z

    std::cout << offsetX << std::endl;
    std::cout << offsetY << std::endl;
    std::cout << offsetZ << std::endl;

    // Output: 0, 4, 8

    return 0;
}