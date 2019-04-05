#include <iostream>
#include <conio.h>

int main()
{
	std::cout << "Enter your text, please:";
	const int SIZE = 50;
	char str[SIZE] = "";
	std::cin >> str;

	for (size_t i = 0; (i < SIZE) && (str[i] != '\0'); i++)
	{
		if ((str[i]>='A')&&(str[i]<='Z'))
		{
			str[i] += 'a' - 'A';
		}
		else {}
		std::cout << str[i];
	}
	
	_getch();
	return 0;
}
	