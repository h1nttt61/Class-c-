#include "iostream"

class Counter
{
public:
	Counter(int val) : value{ val } {}
	void print()
	{
		std::cout << "Value: " << value << std::endl;
	}
	int value;
};

Counter operator + (const Counter& c1 , const Counter& c2)
{
	return Counter{ c1.value + c2.value };
}

void main()
{
	Counter c1{ 20 };
	Counter c2{ 10 };
	Counter c3 = c1 + c2;
	c3.print();
}