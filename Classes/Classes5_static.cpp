#include "iostream"

class Person
{
public:
	Person(std::string p_name, unsigned p_age)
	{
		++count;
		name = p_name;
		age = p_age;
		std::cout << "Created " << name  << " Objects  " << count << std::endl;
	}
	/// <summary>
	/// �������������
	/// </summary>
	~Person()
	{
		--count;
		std::cout << "Person " << name << " deleted  " << count << std::endl;
	}
	static void print_cnt()//����������� ������
	{
		std::cout << "Created " << count << " Objects" << std::endl;
	}
private:
	std::string name;
	unsigned age;
	static unsigned count; //static inline unsigned count �� �������
};
unsigned Person::count = 0;

int main()
{
	{
		Person tom{ "Tom" , 18};
		Person bob{ "Bob" , 91};
	}   // ������� Tom � Bob ������������

	Person sam{ "Sam", 92 };
}