#include "iostream"

class Person
{
public:
	Person(std::string name, unsigned age)
	{
		this->name = name;
		this->age = age;
	}
	void print()
	{
		std::cout << "Name: " << name << "\tage: " << std::endl;
	}
protected:
	std::string name; // доступно из произвдных классов
private:
	unsigned age;
};

/*class Employee : public Person
{
public:
	Employee(std::string name, unsigned age, std::string company) : Person(name, age)
	{
		this->company = company;
	}
	void printEmployee()
	{
		std::cout << name << " works in " << company << std::endl;
	}
private:
	std::string company;
};*/

class Employee : private Person
{
public:
	Employee(std::string name, unsigned age, std::string company) : Person(name, age)
	{
		this->company = company;
	}
	using Person::print;
	void printEmployee()
	{
		std::cout << name << " works in " << company << std::endl;
	}
private:
	std::string company;
};

void main()
{
	Person person{ "Tom", 38 };
	person.print();     // Name: Tom       Age: 38

	Employee employee{ "Bob", 42, "Microsoft" };
	employee.printEmployee();
	employee.print();
}