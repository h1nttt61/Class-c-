#include "iostream"

class Integer
{
public:
	Integer(unsigned value) : value(value)
	{ }
	void printInteger()
	{
		std::cout << value << std::endl;
	}
protected:
	unsigned value;
};

class Decimal : public Integer
{
public:
	Decimal(unsigned i_value, unsigned d_value) : Integer(i_value), value(d_value)
	{}
	void printDecimal()
	{
		std::cout  << Integer::value << "." << value << std::endl;
	}
protected:
	unsigned value;
};

void main()
{
	Decimal decimal{ 12345, 3456 };
	decimal.printInteger();
	decimal.printDecimal();
}