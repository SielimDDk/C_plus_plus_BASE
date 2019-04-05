#include <iostream>
#include <conio.h>

int main()
{
	const int SIZE = 50;
	char str[SIZE] = "";

	std::cout << "Enter your text, please:";
	std::cin >> str;

	for (size_t i = 0;(i<SIZE)&&(str[i]!='\0'); i++)
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i]+='A'-'a';
		}
		else {}
		std::cout << str[i];
	}
	

	_getch();
	return 0;
}