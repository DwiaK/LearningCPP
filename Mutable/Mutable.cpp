#include <iostream>
#include <string>

// Common for debugging

class Entity
{
private:
    std::string m_Name;
    mutable int m_DebugCount = 0; // can be modified in a constant method

public:
    const std::string& GetName() const
    { 
        m_DebugCount++;
        return m_Name; 
    }
};

int main()
{
    const Entity e;
    e.GetName(); // because it's const, you only can call const functions

    // Lambdas
    int x = 8;

    // a little function inside a variable
    auto f = [=]() mutable // & -> by reference | = -> by value
    {
        x++; // if doesn't have the mutable keyword it won't work
        std::cout << x << std::endl;
    };

    // calling the lambda variable
    f();
    // x = 8 (cause it's passed by value)

    return 0;
}