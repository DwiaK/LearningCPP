#include <iostream>
#include <string>

using String = std::string;

// NEW is an Operator, so you can overload the operator changing its behavior

class Entity
{
private:
    String m_Name;

public:
    Entity() : m_Name("Unknown") { }
    Entity(const String& name) : m_Name(name) { }

    const String& GetName() const { return m_Name; }
};

int main()
{
    int a = 2;
    int* b = new int[50]; // 200 bytes of memory     // New returns a pointer

    Entity* e = new Entity();
    // Entity* e = (Entity*)malloc(sizeof(Entity)); // THE SAME, but the only difference is in C++ new calls the constructor, 
                                                 // and malloc just allocate the memory and then give us a pointer to that memory


    delete e;
    delete[] b; // if allocating with square brackets, delete with square brackets

    return 0;
}