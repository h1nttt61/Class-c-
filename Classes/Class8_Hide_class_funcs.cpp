#include "iostream"

class Person
{
public:
	Person(std::string name, unsigned age) : name(name), age(age)
	{ }
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
	Employee(std::string name, unsigned age, std::string company) : Person(name, age), company(company)
	{ }
	void print() const
	{
		Person::print();
		std::cout << "Works in " << company << std::endl;
	}
private:
	std::string company;
};

void main()
{
	Employee tom{ "Tom", 38, "T-bank" };
	tom.print();
}