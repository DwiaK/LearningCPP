#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_Name;
    int m_Age;

public:
    // EXPLICIT call the constructor
    explicit Entity(const std::string& name) 
        : m_Name(name), m_Age(-1) {}

    explicit Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{
    // Printing
}

int main()
{
    // Can do this
    // Entity a("DwiaK");
    // Entity b(22);

    // in this form
    // Entity a = "DwiaK";
    // Entity b = 22;

    // When I put explicit before Entity Constructors, this get error \/
    // Because it has to be explicit

    //PrintEntity(22); // 22 can be converted into an entity because entity constructor has an int parameter
    //
    //PrintEntity(std::string("DwiaK")); // or
    //PrintEntity(Entity("DwiaK"));



    return 0;
}