#include <iostream>
#include "Log.h"

// Includes
// Angular brackets<> for only including paths and Quotes"" for everything

void Log(const char* message)
{
    std::cout << message << std::endl;
}

int main()
{
    InitLog();
    Log("Hello World");

    return 0;
}
