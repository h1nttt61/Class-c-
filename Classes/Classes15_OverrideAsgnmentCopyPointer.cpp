#include "iostream"

class Counter final
{
public:
	Counter(int n) 
	{
		value = new int(n);
	}

	~Counter()
	{
		delete value;
	}

	void print() const;

	Counter& operator=(const Counter& counter)
	{
		if (&counter != this)
			*value = *counter.value;
		return *this;
	}

private:
	int* value;
};

void Counter::print() const
{
	std::cout << *value << std::endl;
}

void main()
{
	Counter counter1{ 5 };
	{
		Counter counter2{ 3 };
		counter1 = counter2;
		counter1.print();     
	}
	counter1.print();
}