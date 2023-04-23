#include <iostream>
#include <string>

using String = std::string; // Simplifying the code

class Entity
{
private:
    String m_Name;

public:
    Entity() : m_Name("Unknown") {}
    Entity(const String& name) : m_Name(name) {}

    const String& GetName() const { return m_Name; }
};

void Function()
{
    Entity entity = Entity("DwiaK");
} // when hits here, entity is destroyed

int main()
{
    ///////////
    // Stack //
    ///////////

    //Entity entity; // calling the default constructor
    //Entity entity = Entity("DwiaK");
    //std::cout << entity.GetName() << std::endl;

    //////////
    // Heap //
    //////////

    // Allocating memory in heap, you are responsible for freeing that memory

    Entity* e;
    {
        // Entity entity = new Entity("DwiaK");  <- this in C# is the same as the one below (difference: pointer (*))
        Entity* entity = new Entity("DwiaK"); // Allocated memory to heap, and called the constructor
        e = entity;

        //std::cout << (*entity).GetName() << std::endl; // THE SAME
        std::cout << entity->GetName() << std::endl;     // THE SAME  (arrow operator)

        // delete entity; // freeing the memory, because it's in heap
    }

    delete e; // or this -> just die when delete is called
    return 0;
}