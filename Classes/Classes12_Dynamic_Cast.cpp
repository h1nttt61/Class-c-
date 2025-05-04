#include "iostream"

class Book
{
public:
	Book(std::string title, unsigned pages) : title{ title }, pages{ pages } {}
	std::string getTitle() const { return title; }
	unsigned getPages() const { return pages; }
	virtual void print() const
	{
		std::cout << title << " pages: " << pages << std::endl;
	}
private:
	std::string title;
	unsigned pages;
};

int main()
{

	return 0;
}