#include "iostream"
class Person
{
public:
	Person(std::string name) : name{ name }
	{

	}
	virtual void print() const //final -> cant reassign
	{
		std::cout << "Name: " << name << std::endl;
	}
private:
	std::string name;
};

class Employee : public Person
{
public:
	Employee(std::string name, std::string company) : Person{ name }, company{ company }
	{

	}
	void print() const override /*Явно указывает преобразование, без него компилятор считает как скрытие функции*/
		Person::print();
		std::cout << "Works in " << company << std::endl;
	}
private:
	std::string company;
};

void main()
{
	/*StudentEmployee bob{ "Bob" };
	bob.print();*/	
	Person tom{ "Tom" };
	Person* person{&tom };
	person->print();
	Employee bob{ "Bob" , "T-bank"};
	person =  &bob;
	person->print();
}/*
//Virtual class Person
class Person
{
public:
	Person(std::string name) : name{name}
	{
		std::cout << "Person created" << std::endl;
	}
	~Person()
	{
		std::cout << "Person deleted" << std::endl;
	}
	void print() const
	{
		std::cout << "Person: " << name << std::endl;
	}
private:
	std::string name;
};

class Student : public virtual Person
{
public:
	Student(std::string name) : Person{ name } { }
};

class Employee : public virtual Person
{
public:
	Employee(std::string name) : Person{ name } { }
};

class StudentEmployee : public Student, public Employee
{
public:
	StudentEmployee(std::string name) : Student{ name }, Employee{ name }, Person{ name } {}	
};*/
