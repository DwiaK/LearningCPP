#include <iostream>

class Entity
{

public:
    float X, Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

// Iherits from entity
class Player : public Entity
{
public:
    const char* Name;

    void PrintName()
    {
        std::cout << Name << std::endl;
    }
};

int main()
{
    std::cout << sizeof(Entity) << std::endl; // size of Entity
    std::cout << sizeof(Player) << std::endl; // size of Player

    Player player;
    player.PrintName();
    player.Move(5, 5);
    player.X = 2;

    return 0;
}