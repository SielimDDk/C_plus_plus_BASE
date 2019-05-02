#include <iostream>
#include <conio.h>

struct Size
{
	uint32_t length = 0;
	uint32_t width = 0;
	uint32_t heith = 0;
};

struct book
{
	char name[50] = "";
	char author[50] = "";
	uint32_t amount_of_pages = 0;
	double price = 0.0;
	uint32_t year_of_issue = 0;
	Size size;
};

void showData(const book &Obj)
{
	std::cout << "Name of the book: "				<< Obj.name << ";" << std::endl;
	std::cout << "Author of the book: "				<< Obj.author << ";" << std::endl;
	std::cout << "Amount of pages of the book: "	<< Obj.author << ";" << std::endl;
	std::cout << "Price of the book: "				<< Obj.price << " UAH;" << std::endl;
	std::cout << "Year of issue of the book: "		<< Obj.year_of_issue << ";" << std::endl;
	std::cout << "Size of the book: " << Obj.size.length << "x" << Obj.size.width << "x" << Obj.size.heith << " (mm)." << std::endl;
	std::cout << std::endl;
}

int main()
{
	book first_book = {};
	strcpy_s(first_book.name, "Treasure Island");
	strcpy_s(first_book.author, "Robert Louis Stevenson");
	first_book.amount_of_pages = 115;
	first_book.price = 112.35;
	first_book.year_of_issue = 1883;
	first_book.size.length = 200;
	first_book.size.width = 120;
	first_book.size.heith = 20;

	showData(first_book);

	_getch();
	return 0;
}