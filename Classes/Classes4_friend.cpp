#include "iostream"

class Auto;

class Person
{
public:
	Person(std::string p_name) 
	{
		name = p_name;
	}
	void drive(const Auto&);
	void setPrice(Auto&, unsigned);

private:
	std::string name;
};

class Auto
{
	friend void Person::drive(const Auto&); //friend class Person 
	/*�� ���� ��� ����� �� ����� �� �������, ��� ����� Person - ��� ���� ������ Auto, ������� ������� Person ����� ���������� � ��������� ���������� ������ Auto.
    ����� ����� � ������ Person ����� ���������� � �������� ������ ������ Auto �� ����� �������.*/
	friend void Person::setPrice(Auto&, unsigned);
public:
	Auto(std::string a_name, unsigned a_price)
	{
		price = a_price;
		name = a_name;
	}
	void print()
	{
		std::cout << name << " : " << price << std::endl;
	}
private:
	unsigned price;
	std::string name;
};

void Person::drive(const Auto& car)
{
	std::cout << name << " drivers " << car.name << std::endl;
}
void Person::setPrice(Auto& car, unsigned price)
{
	car.price = price;
}

void main()
{
	Auto tesla{ "Tesla", 5000 };
	Person tom{ "Tom" };
	tesla.print();
	tom.drive(tesla);
	tom.setPrice(tesla, 8000);
	tesla.print();
}