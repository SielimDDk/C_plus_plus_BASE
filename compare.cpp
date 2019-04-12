#include <iostream>
#include <conio.h>
#include <ctime>

void showNumbers(int32_t arr[], const uint8_t SIZE);
void showNumbers(int32_t arr[], const uint8_t SIZE)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		std::cout << arr[i] << " ";
	}
}

void enterNumbers(int32_t arr[], const uint8_t SIZE, int32_t number);
void enterNumbers(int32_t arr[], const uint8_t SIZE, int32_t number)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		//std::cout << "Enter " << i + 1 << " number: ";
		//std::cin >> number;
		arr[i] = rand();
	}
}

void bubleSort(int32_t arr[], const uint8_t SIZE, uint32_t*ptr_time_bsort);
void bubleSort(int32_t arr[], const uint8_t SIZE, uint32_t*ptr_time_bsort)
{
	for (size_t i = 0; i < SIZE; i++)
	{
		for (size_t j = 0; j < SIZE - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int32_t var = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = var;
			}
			*ptr_time_bsort++;
		}
	}
}

void qSort(int32_t arr[], const uint8_t SIZE, uint32_t*ptr_time_qsort);
void qSort(int32_t arr[], const uint8_t SIZE, uint32_t*ptr_time_qsort)
{

	int8_t first = arr[0];
	int8_t last = arr[SIZE];
	int32_t midle = (arr[0] + arr[SIZE]) / 2;
	do {
		while (arr[first] < midle)
		{
			first++;
		}
		while (arr[last] > midle)
		{
			last--;
		}
		if (first <= last)
		{
			int32_t var = arr[first];
			arr[first] = arr[last];
			arr[last] = var;
			first++;
			last--;
		}
		*ptr_time_qsort++;
	} while (first < last);
}

auto compare()
{
	return[&](uint32_t*ptr_time_bsort, uint32_t*ptr_time_qsort)
	{
		if (ptr_time_bsort < ptr_time_qsort)
		{
			std::cout << "This time buble sort is better!" << std::endl;
		}
		else if (ptr_time_bsort > ptr_time_qsort)
		{
			std::cout << "This time quick sort is better!" << std::endl;
		}
		else
		{
			std::cout << "This time quick sort and buble sort are the same!" << std::endl;
		}
	};
}


int main()
{


	const uint8_t SIZE = 10;
	int32_t arr[SIZE] = {};

	int32_t number = 0;

	srand(time(NULL));

	enterNumbers(arr, SIZE, number);

	std::cout << "Your numbers: ";

	showNumbers(arr, SIZE);

	std::cout << std::endl;

	uint32_t time_bsort = 0;
	uint32_t*ptr_time_bsort = &time_bsort;

	bubleSort(arr, SIZE, ptr_time_bsort);

	std::cout << "Sort numbers by bublesort: ";

	showNumbers(arr, SIZE);

	std::cout << std::endl;

	uint32_t time_qsort = 0;
	uint32_t* ptr_time_qsort = &time_qsort;

	qSort(arr, SIZE, ptr_time_qsort);

	std::cout << "Sort numbers by qsort: ";

	showNumbers(arr, SIZE);

	auto compare(uint32_t*ptr_time_bsort, uint32_t*ptr_time_qsort);

	std::cout << time_bsort << time_qsort;
	_getch();
	return 0;
}









