#include "iostream"

class Person
{
public:
	Person(std::string name) : name{ name } {}
	virtual void print() const
	{
		std::cout << "Name: " << name << std::endl;
	}
	std::string GetName() const { return name; }
private:
	std::string name;
};

class Employee : public Person
{
public:
	Employee(std::string name, std::string company) : Person{ name }, company{ company } {}
	void print() const override
	{
		std::cout << GetName() << " (" << company << ")" << std::endl;
	}
	std::string GetCompany() const { return company; }
private:
	std::string company;
};

void main()
{
	Employee bob{ "Bob", "Google" };

	Person* person{ &bob };
	person->print();

	Employee sam{ "Sam", "T-bank" };
	Person& person2{ sam };
	person2.print();
}