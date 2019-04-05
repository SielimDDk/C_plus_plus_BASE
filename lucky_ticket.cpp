#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
	printf("Enter six digit number:");
	uint32_t number = 0;
	std::cin >> number;

	if (number < 999999 && number>=0)
	{
		uint16_t number1 = number / 1000;
		uint16_t number2 = number % 1000;


		short sum_one = 0;

		while (number1 > 0)
		{
			short digit1 = 0;
			digit1 = number1 % 10;
			number1 /= 10;
			sum_one += digit1;
		}

		short sum_two = 0;

		while (number2 > 0)
		{
			short digit2 = 0;
			digit2 = number2 % 10;
			number2 /= 10;
			sum_two += digit2;
		}

		std::cout << "The sum of first 3 digits: " << sum_one << std::endl;
		std::cout << "The sum of second 3 digits: " << sum_two << std::endl;

		if (sum_one == sum_two)
		{
			printf("The ticket is lucky!!!");
		}
		else
		{
			printf("The ticket is not lucky :(");
		}
	}
	else
	{
		printf("The number is not six digit!");
	}

	
	


	_getch();
	return 0;
}
