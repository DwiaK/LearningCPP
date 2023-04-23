#include <iostream>

// Constants are just promises you can break it (but you shouldn't)

class Entity
{
private:
    int m_X, m_Y;
    int* exm_X, *exm_Y; // don't forget to put * pointer before the second variable too, or it's not going to be a pointer

    mutable int var; // can be modified event in a constant method

public:
    int GetX() const // this method is not going to modify (cannot modify class member variables) (will break when m_X = 2;)
    {
        return m_X;
    }

    void SetX(int x)
    {
        m_X = x;
    }

    // WHAT THE HELL IS GOING ON
    const int* const ExampleGetX() const // returns a pointer that cannot be modified, the content of the pointer cannot be modified, and the method won't modify the member variables
    {
        return exm_X;
    }
};

void PrintEntity(const Entity& e) // I don't want to copy my entity class, so I put const and & reference
{
    std::cout << e.GetX() << std::endl;
}

int main()
{
    Entity e;

    //const int a = 5;
    //a = 2; // can't modify

    //const int MAX_AGE = 90; // I'm declaring it, saying it's not going to modify. (but it could)

    const int MAX_AGE = 90;
    int* a = new int;

    *a = 2;
    a = (int*) & MAX_AGE; // reassign the pointer
    std::cout << *a << std::endl;

    ///////
    // To remember:
    // int const* a = new int;
    // is the same as
    // const int* a = new int;


    return 0;
}