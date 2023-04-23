#include <iostream>

enum Example : char // it can have types
{
    A, B, C
};

int main()
{
    Example value = B; // it has to be one of the items in enum Example

    if (value == B)
    {
        // Do something here
    }
    std::cout << "Hello World!\n";

    return 0;
}
