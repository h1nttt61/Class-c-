#include "iostream"

struct person 
	///. Однако обычно структуры служат для хранения каких-то общедоступных данных в виде публичных переменных. Для остальных сценариев используются классы.
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

    Day today{ Thursday };   // используем только имя константы
    // или так 
    //Day today = Thursday;
    std::cout << static_cast<int>(today) << std::endl;      // 3
    // выводим значение констаты Sunday
    std::cout << static_cast<int>(Sunday) << std::endl;
}