#include "iostream"
/*
//��� �������� �����������
class Person //����������
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
//������������ �� ����������
class Employee: public Person //��������� ������������(����������� �����, ����� ������ �� public)
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
//� ������� �������������
class Person //final - ������ ������������
{
public:
	Person(std::string name, unsigned age)
	{
		this->name = name;
		this->age = age;
		std::cout << "Account created" << std::endl;
	}
	~Person()
	{
		std::cout << "Account deleted" << std::endl;
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
	Employee(std::string name, unsigned age, std::string company) : Person(name, age)
	{
		this->company = company;
		std::cout << "Employee created" << std::endl;
	}
	~Employee()
	{
		std::cout << "Employee deleted" << std::endl;
	}
	//����������� ����������� ������ Employee
	//�����
	Employee(const Employee& employee) : Person(employee)
	{
		company = employee.company;
	}
private:
	std::string company;
};
//class Employee : public Person
//{
//public:
//	using Person::Person;
//};
void main() 
{
	Employee tom{ "Tom", 38, "Google" };
	Employee tomas{ tom };    // �������� ����������� �����������
	tomas.print(); 
}