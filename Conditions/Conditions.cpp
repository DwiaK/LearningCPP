#include <iostream>

int main()
{
    int x = 5;
    bool comparisonResult = x == 5; // Check if x equals to 5 and put it true or false

    // Condition
    if (comparisonResult)
    {
        std::cout << "True" << std::endl;
    }

    // Example
    const char* ptr = nullptr;
    if(ptr)
        std::cout << ptr << std::endl;
    else if(ptr == "Hello")
        std::cout << "Ptr is Hello" << std::endl;
    else
        std::cout << "Ptr is null" << std::endl;

    return 0;
}