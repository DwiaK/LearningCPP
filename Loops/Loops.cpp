#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    // For loop
    for (int i = 0; i < 5; i++)
    {
        Log("For Loop Result");
    }

    Log("======================");

    // While loop
    int i = 0;
    while (i < 5)
    {
        Log("While Loop Result");
        i++;
    }

    Log("======================");

    // Do While loop
    int g = 0;
    do
    {
        Log("Do While Loop Result");
        g++;
    } while (g < 5);

    return 0;
}