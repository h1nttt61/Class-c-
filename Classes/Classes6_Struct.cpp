#include "iostream"

struct person 
	///. ������ ������ ��������� ������ ��� �������� �����-�� ������������� ������ � ���� ��������� ����������. ��� ��������� ��������� ������������ ������.
{
	unsigned age;
	std::string name;

};
enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
using enum Day;
int main()
{
    person tom;
    tom.name = "Tom";
    tom.age = 34;
    std::cout << "Name: " << tom.name << "\tAge: " << tom.age << std::endl;
    
    /*Day today{ Day::Thursday };
    std::cout << "Today: " << static_cast<int>(today) << std::endl;*/

    Day today{ Thursday };   // ���������� ������ ��� ���������
    // ��� ��� 
    //Day today = Thursday;
    std::cout << static_cast<int>(today) << std::endl;      // 3
    // ������� �������� �������� Sunday
    std::cout << static_cast<int>(Sunday) << std::endl;
}