#include "iostream"

/// <summary>
/// ������ � �����������
/// </summary>
class Person
{
private:
	std::string name;
	
public:
	mutable unsigned age; //������ ����� ������
	Person(std::string p_name, unsigned p_age)
	{
		name = p_name;
		age = p_age;
	}
	unsigned getAge() const
	{
		return age;
	}
	std::string getName() const
	{
		return name;
	}
	//����������� �������
	void print() const
	{
		std::cout << "Name: " << getName() << "\tage: " << getAge() << std::endl;
	}
};
void main()
{
	const Person vit{ "Vitaly", 18 };	
	vit.age = 19;
	vit.print();
	Person leh{ "Aleksey", 18 };
	leh.print();
}