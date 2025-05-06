#include "iostream"

class Counter
{
public:
	Counter(int value) : value{ value } {}
	int getValue() const { return value; }
private:
	int value;
};

std::ostream& operator<<(std::ostream& stream, const Counter& counter)
{
	stream << "Value: ";
	stream << counter.getValue();
	return stream;
}

void main()
{
	Counter counter1{ 20 };
	Counter counter2{ 50 };
	std::cout << counter1 << std::endl;     // Value: 20
	std::cout << counter2 << std::endl;
}