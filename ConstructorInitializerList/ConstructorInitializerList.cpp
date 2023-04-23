#include <iostream>
#include <string>

// Member Initializer List

class Example
{
public:
    Example()
    {
        std::cout << "Created Entity!" << std::endl;
    }

    Example(int x)
    {
        std::cout << "Created Entity with " << x << "!" << std::endl;
    }
};

class Entity
{
private:
    std::string m_Name;
    int m_Score;
    Example m_Example;

public:
    // goes after the constructor with (: memberVar(var))
    // use it to keep the code clean
    Entity()
        : m_Name("Unknown"), m_Score(0), // Initialize the variables with the constructor (*IT NEEDS TO BE IN THE ORDER*)
          m_Example(8) // Initializing Example with 8. (*Should use everywhere).
    {
        m_Example = Example(8); // new instance, so throw the old one away
        // m_Name = std::string("Unknown"); // <- waste of performance
        // Init();
    }

    Entity(const std::string& name)
        : m_Name(name)
    {
    }

    const std::string& GetName() const { return m_Name; }
};

int main()
{
    Entity e0;
    std::cout << e0.GetName() << std::endl;

    Entity e1("DwiaK");
    std::cout << e1.GetName() << std::endl;

    return 0;
}
