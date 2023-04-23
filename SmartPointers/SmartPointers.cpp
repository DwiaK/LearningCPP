#include <iostream>
#include <string>
#include <memory> // smart pointers

// Smart Pointers
// std::unique_ptr | std::shared_ptr | std::weak_ptr
// using new and delete will allocate content in the heap memory and deletes it.
// smart pointers are a way to automatize that.

// Unique pointer is a scoped pointer. When it goes out of the scope, it will be destroyed
// Shared pointer works via reference counting. When it reaches zero it dies

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

    void Print() {}
};

int main()
{
    {
        ////////////////////
        // Unique Pointer //
        ////////////////////

        //std::unique_ptr<Entity> entity(new Entity());
        std::unique_ptr<Entity> entity = std::make_unique<Entity>(); // better way // safer
        // you can't copy it
        // std::unique_ptr<Entity> e0 = entity;

        ////////////////////
        // Shared Pointer //
        ////////////////////

        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>(); // just dies when all of them are destroyed
        // you can copy it
        std::shared_ptr<Entity> e0 = sharedEntity;

        //////////////////
        // Weak Pointer //
        //////////////////

        std::weak_ptr<Entity> weakEntity = sharedEntity; // makes copy of the shared entity but doesn't increase its counter (it won't keep the shared entity alive)

        entity->Print();
    }

    return 0;
}