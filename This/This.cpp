#include <iostream>
#include <string>

// "This" Keyword

void PrintEntity(const Entity& e); // declare

class Entity
{
public:
    int x, y;

    Entity(int x, int y)
    {
        // if I want to initialize the variables in the body of the constructor

        // Entity* e = this;
        // e->x = x;

        // Same as

        (*this).x = x; //same \/
        this->x = x;

        Entity& e = *this;

        PrintEntity(*this); // pass the current instance with x and y i've setted
    }

    int GetX() const // not allowed to modify the class
    {
        const Entity* e = *this;

        return x;
    }
};

void PrintEntity(const Entity& e) 
{
    // Print
}

int main()
{
    return 0;
}