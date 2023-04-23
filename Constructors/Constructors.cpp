#include <iostream>

class Entity
{

public:

    float X, Y;

    // Constructor
    Entity()
    {
    }

    // Overloads
    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

class Log
{
    // by default, c++ creates a default constructor for the class
    // to delete it:
    Log() = delete;
};

int main()
{
    Entity e(10.0f, 5.0f);
    e.Print();

    return 0;
}
