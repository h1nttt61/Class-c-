#include "iostream"

class Person
{
public:
	Person(std::string name) : name{ name }
	{

	}
	void print() const
	{
		std::cout << "Name: " << name << std::endl;
	}
private:
	std::string name;
};

class Employee : public Person
{
public:
	Employee(std::string name) : Person{ name }
	{

	}
};
//Преобразование явным образом через static_cast
void main()
{
	Employee employee{ "Bob" };
	employee.print();

	Person person1{ static_cast<Person>(employee) };//через конструктор копирования
	person1.print();

	Person person2{ "Tom" };
	person2 = static_cast<Person>(employee);//через присваивание

	person2.print();
}
