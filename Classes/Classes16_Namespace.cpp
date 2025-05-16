#include "iostream"

/*
always public, no namespace
void print(const std::string& text)
{
	std::cout << text << std::endl;
}*/
namespace console
{
	namespace messages
	{
		const std::string hello{ "hello" };
		const std::string welcome{ "Welcome" };
		const std::string goodbye{ "Good bye" };
	}
	void print(const std::string& text)
	{
		std::cout << text << std::endl;
	}
	void print_default()
	{
		std::cout << messages::hello << std::endl;
	}

}

using namespace console;

using namespace messages;

//Only print
//using console::print;

namespace ms = console::messages;

void main()
{
	//Without using
	//console::print(console::messages::hello);
	//print("hello");
	//with using
	print(hello);

	print(ms::welcome);
}
