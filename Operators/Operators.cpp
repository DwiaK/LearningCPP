#include <iostream>
#include <string>

struct Vector2
{
	float x, y;

	Vector2(float x, float y) 
		: x(x), y(y) {}

	Vector2 Add(const Vector2& other) const
	{
		return Vector2(x + other.x, y + other.y);
	}

	// overloads operator +
	Vector2 operator+(const Vector2& other) const
	{
		return Add(other);
	}

	Vector2 Multiply(const Vector2& other) const
	{
		return Vector2(x * other.x, y * other.y);
	}

	// overloads operator *
	Vector2 operator*(const Vector2& other) const
	{
		return Multiply(other);
	}

	bool operator== (const Vector2& other) const
	{
		return x == other.x && y == other.y;
	}

	bool operator!= (const Vector2& other) const
	{
		// reverse the result of ==
		return !(*this == other); // calls other and put it as false
	}
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
	stream << other.x << ", " << other.y;
	return stream;
}

int main()
{
	Vector2 position(4.0f, 4.0f);
	Vector2 speed(0.5f, 1.5f);
	Vector2 powerUp(1.1f, 1.1f); // Modifying speed(power up)

	Vector2 result1 = position.Add(speed.Multiply(powerUp)); // instead of doing this
	Vector2 result2 = position + speed * powerUp; // do this, using the operator overload

	if (result1 == result2) // needs to overload operator ==

	std::cout << result2 << std::endl; // doesn't work if I don't overload << operator

	return 0;
}