#include <iostream>
#include <array>

int main()
{
    int example[5]; // array of 5 integers
    // Accessing the array
    example[0] = 2;
    example[4] = 4;

    int a = example[0];

    std::cout << example[0] << std::endl;
    std::cout << example << std::endl; // it is a pointer type, so print the memory address.

    // Testing

    // SAME
    int example2[5];
    example[0] = 2;
    example[1] = 2;
    example[2] = 2;
    example[3] = 2;
    example[4] = 2;
    // SAME
    for (int i = 0; i < 5; i++)
        example[i] = 2;

    // Pointers
    int example3[5];
    int* ptr = example;

    // SAME
    example3[2] = 5;
    *(ptr + 2) = 6;
    *(int*)((char*)ptr + 8) = 6;

    //////////

    // Same
    int example4[5]; // created on stack memory
    int* another = new int[5]; // created on heap memory
    delete[] another;
    ////

    //////
    // about size of an array
    int sizeExample[5];
    int count = sizeof(a) / sizeof(int); // 5

    // Common way to use size of an array
    const int exampleArraySize = 5;
    int exampleArraySz[exampleArraySize];

    // or you can use std::array
    std::array<int, 5> anotherSizeExample;
    for(int i = 0; i < anotherSizeExample.size(); i++) // .size()


    return 0;
}