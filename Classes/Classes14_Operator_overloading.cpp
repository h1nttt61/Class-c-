#include "iostream"

class Counter
{
public:
	Counter(int val) : value{ val } {}
	void print()
	{
		std::cout << "Value: " << value << std::endl;
	}
	Counter operator + (const Counter& couter) const
	{
		return Counter{value + couter.value};
	}
private:
	int value;
};



void main()
{
	Counter c1{ 20 };
	Counter c2{ 10 };
	Counter c3 = c1 + c2;
	c3.print();
}