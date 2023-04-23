#include <iostream>
#include <string>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }

    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }
};

class ScopedPtr
{
private:
    Entity* m_Ptr;

public:
    ScopedPtr(Entity* ptr) : m_Ptr(ptr)
    {
    }

    ~ScopedPtr()
    {
        delete m_Ptr;
    }
};

int main()
{
    // scope
    {
        //Entity e; // stack // it destroys
        //Entity* e = new Entity(); // heap allocation // it doesn't destroy
        ScopedPtr e = new Entity(); // heap allocated // it destroys when get out of the scope
    }

    return 0;
}