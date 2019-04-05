#include <iostream>
#include <conio.h>

int main()
{
	/*
	std::cout << "Enter your text, please: ";
    int size = 15;
	char str[size] = "";
	do {
		size++;
		std::cin >> str;
	} while ();
	*/

	std::cout << "Enter your text, please: ";
	const int SIZE = 50;
	char str[SIZE] = "";
	std::cin >> str;

	for (int i = SIZE-1; i >= 0; i--)
	{
		if (str[i] == '\0') 
		{}

		else
		{
			std::cout << str[i];
		}
	}
	


	_getch();
	return 0;
}