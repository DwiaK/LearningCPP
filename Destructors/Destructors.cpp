#include <iostream>

class Entity
{

public:

    float X, Y;

    // Constructor
    Entity()
    {
        X = 0.0f;
        Y = 0.0f;

        std::cout << "Created Entity!" << std::endl;
    }

    // Destructor
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }

    void Print()
    {
        std::cout << X << ", " << Y << std::endl;
    }
};

void Function()
{
    Entity e;
    e.Print();

    // or use:
    e.~Entity(); // to run the destructor
}

int main()
{
    Function();

    return 0;
}
