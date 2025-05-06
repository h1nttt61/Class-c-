#include "iostream"

class Shape
{
public:
	Shape(int x, int y) : x{ x }, y{ y } {}
	virtual double getSquare() const = 0;
	virtual double getPerimeter() const = 0;
	void printCoords()
	{
		std::cout << "x: " << x << " y: " << y << std::endl;
	}
private:
	int x;
	int y;
};

class Rectangle : public Shape
{
public:
	Rectangle(int x, int y, double width, double height) : Shape(x, y), width{ width }, height{ height } {}
	double getSquare() const override
	{
		return width * height;
	}
	double getPerimeter() const override
	{
		return (width + height) * 2;
	}
private:
	double width;
	double height;
};

class Circle : public Shape
{
public:
	Circle(int x, int y, double r) : Shape(x, y), radius{ r } {}
	double getSquare() const override
	{
		return 3.14 * radius * radius;
	}
	double getPerimeter() const override
	{
		return 2 * 3.14 * radius;
	}
private:
	double radius;
};

void main()
{
	Rectangle rect{ 0, 0, 30, 50 };
	rect.printCoords();     // X: 0    Y: 0

	Circle circle{ 10, 20, 30 };
	circle.printCoords();
}