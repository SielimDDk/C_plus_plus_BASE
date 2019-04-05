#include <iostream>
#include <conio.h>
#include <cstdio>

int main()
{
	
	
	const int SIZE = 5;
	int array_of_numbers[SIZE];
	
	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter a number from -60 to 90:");
		int number = 0;
		std::cin >> number;
		

		if ((number >= (-60)) && (number <= 90))
		{
			array_of_numbers[i] = number;
		}
		else
		{
			printf("Wrong number!!!\n");
			i--;
		}
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Number " << i+1 << ": "<< array_of_numbers[i] << "\n";
	}

	auto sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (array_of_numbers[i] % 2 == 1)
		{
			sum += array_of_numbers[i];
		}
		else {}
	}

	printf("The sum of odd numbers: %d", sum);

	_getch();
	return 0;
}