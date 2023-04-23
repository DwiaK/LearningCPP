#include <iostream>

struct Entity
{
	int x, y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

struct EntityStatic
{
	static int x, y;

	// static methods doesn't have instances
	static void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}
};

// when it's static you have to define it
int EntityStatic::x;
int EntityStatic::y;

int main()
{
	Entity e;
	e.x = 2;
	e.y = 3;

	Entity e1 = { 5, 8 };

	e.Print();
	e1.Print();

	// When it's static, you can have only one instance of it (points to the same memory)
	EntityStatic eStatic;
	eStatic.x = 10;
	eStatic.y = 15;

	return 0;
}