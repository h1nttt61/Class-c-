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

/*
Есть два вида динамического приведения. 
Первый — это преобразование от указателя на базовый класс к указателю на производный класс - так называемое нисхолящее преобразование или downcast
(базовые классы в иерархии помещаются вверху, а производные внизу, поэтому преобразование идет сверху вниз). 
Второй тип — преобразование между базовыми типами в одной иерархии (при множественном наследовании) - кросскаст (crosscast).
*/
int main()
{

	return 0;
}
