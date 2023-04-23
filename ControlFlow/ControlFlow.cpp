#include <iostream>

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        // Continue
        if(i % 2 == 0)
            continue; // continue anyway (skip all the next iterations)

        Log("Hello World");

        // Break
        if (i > 2)
            break; // get out of the loop

        // Return
        if (i > 2)
            return 0; // exit the application
        
        Log("Hello World");
    }
}