#include <iostream>

// Function that returns an int
int Multiply1(int a, int b)
{
    return a * b;
}

// Void function that doesn't return
void Multiply2()
{
    std::cout << 5 * 8 << std::endl;
}

int main()
{
    // Call the functions

    // Multiply 1
    int result = Multiply1(3, 2);
    std::cout << "Result: " << result << std::endl;

    // Multiply 2
    Multiply2();
}
