#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
	printf("Enter your number: ");
	uint64_t number = 0;
	std::cin >> number;

	if (number < 9223372036854775807 && number > 0)
	{
		printf("The reverse of your number is ");
		short digit = 0;
		while (number > 0)
		{
			digit = number % 10;
			number /= 10;
			std::cout << digit;
		}
	}
	else
	{
		printf("Wrong number");
	}

	_getch();
	return 0;
}