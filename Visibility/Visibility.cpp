#include <iostream>
#include <string>

class Entity
{
private: // "Only" this class can access this variables ("only" because if you use "friend" modifier you can access it from other places)
    int X, Y;

public:
    Entity()
    {
        X = 0;
    }
};

class Player : public Entity
{
public:
    Player()
    {
        // X = 2; <- private. it doesn't have access
    }
};

int main()
{
    Entity e;
    //e.X = 2; <- private. it doesn't have access

    return 0;
}