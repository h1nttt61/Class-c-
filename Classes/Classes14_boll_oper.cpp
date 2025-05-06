#include "iostream"

class Counter
{
public:
    Counter(int value) : value{ value } {}
    void print()
    {
        std::cout << "Value: " << value << std::endl;
    }
    bool operator == (const Counter& counter) const = default;
    bool operator != (const Counter& counter) const
    {
        return value != counter.value;
    }
    bool operator > (const Counter& counter) const
    {
        return value > counter.value;
    }
    bool operator < (const Counter& counter) const
    {
        return value < counter.value;
    }
private:
	int value;
};

void main()
{
    Counter c1(20);
    Counter c2(10);
    bool b1 = c1 == c2;     // false
    bool b2 = c1 > c2;   // true

    std::cout << "c1 == c2 = " << std::boolalpha << b1 << std::endl;    // c1 == c2 = false
    std::cout << "c1 > c2 = " << std::boolalpha << b2 << std::endl;
}