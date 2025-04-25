#include "iostream"

class Point
{
private:
	int x;
	int y;
public:
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void showPoint()
	{
		std::cout << "X: " << x << "\tY: " << y << std::endl;
	}

	Point& move(int x, int y)
	{
		this->x += x;
		this->x += y;
		return *this;
	}
};

void main()
{
	Point p{ 5u, 7 };
	p.showPoint();
	p.move(10, 12);
	p.showPoint();
}