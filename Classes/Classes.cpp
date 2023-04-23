#include <iostream>

#define LOG(x) std::cout << x << std::endl;

// Creates a class

// By default all variables in the class are private
// to change it to public I have to specify it with (public:)
class PlayerClass
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

// It is common using structs when you have just some variables like:
struct Vec2
{
	float x, y;

	void add(const Vec2& other) // just modifies internal variables
	{
		x += other.x;
	}
};
// when it doesn't have a lot of functionalities.

struct PlayerStruct
{
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
};

int main()
{
	// Class Instance
	PlayerClass player;
	player.Move(1, -1);

	PlayerStruct player;
	player.Move(1, -1);

	std::cin.get();
}

// ADD(Technically):
// Difference between Classes and Structures
// Classes by default are always private and you have to specify when something has to be public with (public:)
// Structs by default are always public and you have to specify when something has to be private with (private:)