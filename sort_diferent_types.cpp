#include <iostream>
#include <conio.h>
#include <ctime>
#include <cstdlib>


void show_result(unsigned int arr_1[], const unsigned int SIZE)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr_1[i] << " ";
	}
}

int main()
{
	const unsigned int SIZE = 15;
	unsigned int arr_1[SIZE] = {};
	double arr_2[SIZE] = {};
	char string[SIZE] = "";

	for (size_t i = 0; i < SIZE; i++)
	{
		srand(time(NULL));
		arr_1[i] = rand()%100;
	}

	std::cout << "Array of unsigned int: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr_1[i];
		std::cout << " ";
	}
	std::cout << std::endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		srand(time(NULL));
		arr_2[i] = 0.001 * (rand()%100);
	}

	std::cout << "Array of double: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr_2[i];
		std::cout << " ";
	}
	std::cout << std::endl;

	std::cout << "Enter symbols: ";
	std::cin >> string;

	std::qsort(arr_1, SIZE, sizeof(*arr_1), [](const void*a, const void*b) 
	{
		unsigned int x1 = *static_cast <const unsigned int*>(a);
		unsigned int x2 = *static_cast <const unsigned int*>(b);

		if (x1 < x2) return -1;
		if (x1 > x2) return 1;
		return 0;
	});

	std::qsort(arr_2, SIZE, sizeof(*arr_2), [](const void*a, const void*b) 
	{
		double x1 = *static_cast <const double*>(a);
		double x2 = *static_cast <const double*>(b);
		
		if (x1 < x2) return -1;
		if (x1 > x2) return 1;
		return 0;
	});

	std::qsort(string, SIZE, sizeof(*string), [](const void*a, const void*b)
	{
		char x1 = *static_cast <const char*>(a);
		char x2 = *static_cast <const char*>(b);

		if (x1 < x2) return -1;
		if (x1 > x2) return 1;
		return 0;
	});

	std::cout << 
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr_1[i];
	}
	std::cout << std::endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr_2[i];
	}
	std::cout << std::endl;

	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr_1[i];
	}
	std::cout << std::endl;

	_getch();
	return 0;
}