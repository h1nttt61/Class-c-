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
class SHape
{
public:
	virtual double getSquare() const = 0;
	virtual double getPerimater() const = 0;
};



//using namespace std;
void main()
{
	/*
	//const char* b = "213";
	//int a = atoi(b); std::stoi
	std::string b = "213";
	int a;
	std::stringstream(b) >> a;
	std::cout << a << std::endl;
	*/
}
