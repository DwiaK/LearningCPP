#include <iostream>
#include <string>

class Entity
{
public:
    int x;

public:
    void Print() const
    {
        std::cout << "Hello!" << std::endl;
    }
};

class ScopedPtr
{
private:
    Entity* m_Obj;

public:
    ScopedPtr(Entity* entity)
        : m_Obj(entity)
    {
    }

    ~ScopedPtr()
    {
        delete m_Obj;
    }

    //Entity* GetObject() { return m_Obj; }

    Entity* operator->()
    {
        return m_Obj;
    }

    const Entity* operator->() const // const version
    {
        return m_Obj;
    }
};

int main()
{
    Entity e;
    e.Print();

    Entity* ptr = &e;

    // to avoid this extra line
    Entity& entity = *ptr;
    entity.Print();
    // I can use:
    (*ptr).Print(); // but it seems a little clunky

    // so we use the arrow operator: 
    ptr->Print(); // dereferences the entity pointer
    ptr->x = 2;

    ///////////////////////

    ScopedPtr entityScoped = new Entity();
    //entityScoped.GetObject()->Print();
    entityScoped->Print();

    return 0;
}