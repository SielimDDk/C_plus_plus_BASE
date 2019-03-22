#include <iostream>
#include <conio.h>
#include <stdio.h>


int main()
{
	int height = 0;
	
	std::cout << "Please, enter height: ";
	std::cin >> height;
	std::cout << "\n\n";

	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= (height-i); j++)
		{
			std::cout << " ";
		}
		for (int j = height-i; j < (height+i-1); j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
	_getch();
	return 0;
}