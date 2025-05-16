#include "iostream"

class Counter
{
public:
	Counter(int val) : value{ val } {}
	void print() const;

	/*void SetValue(int val) { value = val; }*/

	Counter& operator=(const Counter& counter)
	{
		if (&counter != this)
			value = counter.value;
		return *this;
	}
private:
	int value;
};

void Counter::print() const	
{
	std::cout << "Value: " << value << std::endl;
}

void main()
{
	Counter c1{ 25 };
	Counter c2{ 30 };
	c2 = c1;
	c2.print();
	/*Counter c1{ 25 };
	auto c2 = c1;
	c1.SetValue(30);
	c1.print();
	c2.print();*/
}