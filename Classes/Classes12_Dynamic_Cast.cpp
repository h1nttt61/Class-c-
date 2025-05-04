#include "iostream"

class Book
{
public:
/*
Для определения виртуальной функции в базовом классе функция определяется с ключевым словом virtual. 
Причем данное ключевое слово можно применить к функции, если она определена внутри класса. А производный класс может переопределить ее поведение.
*/
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

class File
{
public:
	File(unsigned size) : size{ size } {}
	unsigned getSize() const { return size; }
	virtual void print() const
	{
		std::cout << "Size: " << size << std::endl;
	}
private:
	unsigned size;
};

class Ebook : public Book, public File
{
public:
	Ebook(std::string title, unsigned pages, unsigned size) : Book{ title, pages }, File{ size } {}
	void print() const override
	{
		std::cout << getTitle() << "\tPages: " << getPages() << "\tSize: " << getSize() << "Mb" << std::endl;
	}
};
/*
Есть два вида динамического приведения. 
Первый — это преобразование от указателя на базовый класс к указателю на производный класс - так называемое нисхолящее преобразование или downcast
(базовые классы в иерархии помещаются вверху, а производные внизу, поэтому преобразование идет сверху вниз). 
Второй тип — преобразование между базовыми типами в одной иерархии (при множественном наследовании) - кросскаст (crosscast).
*/
int main()
{

	/*Ebook cppbook{"About C++", 350, 6};
	//Чтобы динамическое преобразование было возможно, базовые классы определяют виртуальную функцию print.
	Ebook cppbook{ "About C++", 350, 6 };

	Book* book = &cppbook;  // указывает на объект Ebook
	// дdynamic cast Book to Ebook
	Ebook* ebook{ dynamic_cast<Ebook*>(book) };
	ebook->print();
	return 0;*/
	/*Ebook cppbook{"About C++", 350, 6};
	Book* book = &cppbook;  // указывает на объект Ebook
	// динамическое преобразование из Book в File - crosscast
	File* file{ dynamic_cast<File*>(book) };
	file->print();*/

	//Чтобы указывало на констату const

	Book cppbook{ "About C++", 350 };
	Book* book = &cppbook;  // указывает на объект Book
	// динамическое преобразование из Book в File - crosscast
	File* file{ dynamic_cast<File*>(book) };

	// проверяем результат
	if (file)    // если file !=nullptr
	{
		file->print();
	}
	else
	{
		std::cout << "The book is not a file" << std::endl;
	}

	/* Ссылки
	Ebook cppbook{"About C++", 350, 6};
	Book& book{ cppbook };  // ссылка на Ebook
	// преобразуем в ссылку на Ebook
	Ebook& file{ dynamic_cast<Ebook&>(book) };
	file.print();*/
}
