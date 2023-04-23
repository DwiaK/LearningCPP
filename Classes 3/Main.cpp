#include <iostream>

//extern int s_Variable = 10; // access the variable in static.cpp (int s_Variable musn't be static)

extern int s_Variable = 10;

int main()
{
	std::cout << s_Variable << std::endl;

	return 0;
}