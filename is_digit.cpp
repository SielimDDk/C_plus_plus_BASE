#include <iostream>
#include<conio.h>


int main()
{
	const int SIZE = 50;
	char str[SIZE] = "";

	std::cout << "Enter your string:";
	std::cin >> str;

	for (size_t i=0; (i<SIZE)&&(str[i]!='\0'); i++)
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			std::cout << str[i] << " is digit!" << std::endl;
		}
		else
		{
			std::cout << str[i] << " is symbol!" << std::endl;
		}
	}
	_getch();
	return 0;
}