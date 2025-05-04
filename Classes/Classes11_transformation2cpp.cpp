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
 // преобразуем в указатель на базовый тип
	Person* person{ &bob };
	person->print();
// преобразуем ссылку производного класса в ссылку базового класса
	Employee sam{ "Sam", "T-bank" };
	Person& person2{ sam };
	person2.print();
// обратное преобразование - из базового типа в производный
	Employee dem{ "Dem", "Sberbank" };

	Person* person3{ &dem };

	Employee* employee{ static_cast<Employee*>(person3) };
	employee->print();
	std::cout << employee->GetCompany() << std::endl;
//smart-указатели на базовый класс также могут указывать на объект производного класса
	std::unique_ptr<Person> bob2{ std::make_unique<Employee>("Bob", "Google") };
	bob2->print();
}

