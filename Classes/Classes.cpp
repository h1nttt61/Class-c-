
// Classes.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Person
{
	public:
		std::string name;
		unsigned age; //like unsigned int
		Person(std::string p_name, unsigned p_age);
		Person(const Person& p) = delete;
		void print();
		
		//Person(std::string p_name) : Person(p_name, 18) // вызов первого конструктора
		//{
		//	std::cout << "Second constructor" << std::endl;
		//}
		//Person() : Person(std::string("Undefined")) // вызов второго конструктора
		//{
		//	std::cout << "Third constructor" << std::endl;
		//}
};
Person::Person(std::string p_name, unsigned p_age)
{
	name = p_name;
	age = p_age;
	std::cout << "Constuctor created" << std::endl;
}
/// <summary>
/// Конструктор копирования
/// </summary>
/// <param name="p"></param>
//Person::Person(const Person& p)
//{
//	name = p.name;
//	age = p.age;
//}
void Person::print()
{
	std::cout << "Name: " << name << "\tAge: " << age << std::endl;
}

int main()
{
	/*Person person; //если не писать конструктор , то будет конструктор по умолчанию
	person.name = "Vitaly";
	person.age = 18;
	person.print();*/
	/*Person person; //С конструктором по умолчанию, но указатель
	Person* prt = &person;
	prt->age = 19;
	prt->name = "Vitaly";
	prt->print();*/
	/*Person person("Vitaly", 19); // для 3 конструкторов
	person.print();
	Person tom("Tom");
	tom.print();	
	Person leha;
	leha.print();*/
	Person tom{ "Tom", 28 };
	//Person tomas{ tom };//Конструктор копирования типо(просто копирование)
	tom.print();
	
}
