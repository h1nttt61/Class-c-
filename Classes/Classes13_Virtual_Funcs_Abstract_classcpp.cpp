#include "iostream"
#include "sstream"
#include "string"
/*
Абстрактные классы - это классы, которые содержат или наследуют без переопределения хотя бы одну чистую виртуальную функцию. 
Абстрактный класс определяет интерфейс для переопределения производными классами.

Что такое чистые виртуальные функции (pure virtual functions)? 
Это функции, которые не имеют определения.
Цель подобных функций - просто определить функционал без реализации, а реализацию определят производные классы. 
Чтобы определить виртуальную функцию как чистую, ее объявление завершается значением "=0". Например, определим абстрактный класс, 
который представляет геометрическую фигуру:
*/
/// <summary>
/// Abstract class
/// </summary>
class Shape
{
public:
	virtual double getSquare() const = 0;
	virtual double getPerimeter() const = 0;
};

class Renctagle : public Shape
{
public:
	Renctagle(double width, double height) : width{ width }, height{ height } {}
	double getSquare() const override { return width * height; }
	double getPerimeter() const override { return (width + height) * 2; }
private:
	double width;
	double height;
};

class Circle : public Shape
{
public:
	Circle(double r) : radius{ r } {}
	double getSquare() const override { return 3.14 * radius * radius; }
	double getPerimeter() const override { return 2 * 3.14 * radius; }
private:
	double radius;
};

//using namespace std;
void main()
{
	Renctagle rect{ 30, 50 };
	Circle circle{30};

	std::cout << "Rectangle square: " << rect.getSquare() << std::endl;
	std::cout << "Rectangle perimeter: " << rect.getPerimeter() << std::endl;
	std::cout << "Circle square: " << circle.getSquare() << std::endl;
	std::cout << "Circle perimeter: " << circle.getPerimeter() << std::endl;
	/*
	//const char* b = "213";
	//int a = atoi(b); std::stoi
	std::string b = "213";
	int a;
	std::stringstream(b) >> a;
	std::cout << a << std::endl;
	*/
}
