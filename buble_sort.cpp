#include <iostream>
#include <conio.h>

int main()
{
	const int SIZE = 10;
	int32_t arr[SIZE] = {21,12,34,4,9,-5,16,0,7,-85};

	std::cout << "Numbers: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int var = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = var;
			}
			else {}
		}
	}

	std::cout << "Sort numbers: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}

	_getch();
	return 0;
}