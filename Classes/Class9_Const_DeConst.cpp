#include "iostream"

class Book
{
public:
	Book(unsigned pages) : pages(pages)
	{
		std::cout << "Book created" << std::endl;
	}
	~Book()
	{
		std::cout << "Book deleted" << std::endl;
	}
	void printPagesCount()
	{
		std::cout << pages << " pages" << std::endl;
	}
private:
	unsigned pages;
};

class File
{
public:
	File(double size) : size(size)
	{
		std::cout << "File created" << std::endl;
	}
	~File()
	{
		std::cout << "File deleted" << std::endl;
	}
	void printSize()
	{
		std::cout << size << " mb" << std::endl;
	}
private:
	double size;
};

class Ebook : public Book, public File
{
public:
	Ebook(std::string title, unsigned pages, double size) : Book{ pages }, File{ size }, title{ title }
	{
		std::cout << "Ebook created" << std::endl;
	}
	~Ebook()
	{
		std::cout << "Ebook deleted" << std::endl;
	}
	void printTitle()
	{
		std::cout << "Title: " << title << std::endl;
	}
private:
	std::string title;
};

void main()
{
	Ebook cppbook{"About c++", 320, 5.6};
	cppbook.printTitle();
	cppbook.printSize();
	cppbook.printPagesCount();
}