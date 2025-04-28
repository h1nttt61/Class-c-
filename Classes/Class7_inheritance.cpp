#include "iostream"
/*
//Без базового констуктора
class Person //суперкласс
{
public :
	Person(std::string name, unsigned age)
	{
		this->name = name;
		this->age = age;
	}
	void print() const
	{
		std::cout << "Name: " << name << "\tAge: " << age << std::endl;
	}
	std::string name;
	unsigned age;
private:
	std::string name;
	unsigned age;
};
//КОНСТРУКТОРЫ НЕ КОПИРУЮТСЯ
class Employee: public Person //Отношение наследования(производный класс, берет методы из public)
{
public:
	Employee(std::string name, unsigned age, std::string company) :Person(name, age)
	{
		this->company = company;
	}
private:
	std::string company;
};
*/
//с базовым констурктором
class Person
{
public:
	Person(std::string name, unsigned age)
	{
		this->name = name;
		this->age = age;
	}
	void print() const
	{
		std::cout << "Name: " << name << "\tAge: " << age << std::endl;
	}
private:
	std::string name;
	unsigned age;
};

class Employee : public Person
{
public:
	using Person::Person;
};
void main() 
{
	Person person{ "Tom", 38 };
	person.print();     // Name: Tom       Age: 38

	Employee employee{ "Bob", 42 };
	employee.print();   // Name: Bob       Age: 42
}