#include <iostream>
#include <string>

// Virtual functions -> dynamic dispatch
// made to overwrite a function

class Entity
{
public:
    virtual std::string GetName() { return "Entity"; } // generate a virtual for this function
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string& name) : m_Name(name) {}

    std::string GetName() override { return m_Name; } // override isn't required, but makes the code more readable
                                                      // also prevents spelling mistakes.
};

void PrintName(Entity* entity)
{
    std::cout << entity->GetName() << std::endl;
}

int main()
{
    Entity* e = new Entity();
    //std::cout << e->GetName() << std::endl;
    PrintName(e); // remake

    Player* p = new Player("DwiaK");
    //std::cout << p->GetName() << std::endl;
    PrintName(p); // remake

    // Tests //
    // Expected: PlayerName
    // Result: Entity

    // Entity* entity = p;
    // std::cout << entity->GetName() << std::endl;

    return 0;
}