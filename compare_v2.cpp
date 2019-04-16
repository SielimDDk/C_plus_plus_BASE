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
void bubleSort(int32_t arr [], const uint8_t SIZE, uint32_t*ptr_time_bsort)
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
			(*ptr_time_bsort)++;
		}
	}
}

void qSort(int32_t arr_copy[], const uint8_t SIZE, uint32_t*ptr_time_qsort);
void qSort(int32_t arr_copy[], const uint8_t SIZE, uint32_t*ptr_time_qsort)
{
	int8_t first = arr_copy[0];
	int8_t last = arr_copy[SIZE];
	int32_t midle = (arr_copy[0] + arr_copy[SIZE]) / 2;
	do {
		while (arr_copy[first] < midle)
		{
			first++;
		}
		while (arr_copy[last] > midle)
		{
			last--;
		}
		if (first <= last)
		{
			int8_t var = arr_copy[first];
			arr_copy[first] = arr_copy[last];
			arr_copy[last] = var;
			first++;
			last--;
		}
		(*ptr_time_qsort)++;
	} while (first <= last);
}

auto compare()
{
	return[&](uint32_t*ptr_time_bsort, uint32_t*ptr_time_qsort)
	{
		(*ptr_time_bsort) < (*ptr_time_qsort);
	};
}

void copy_arr(int32_t arr[], int32_t arr_copy[], const uint8_t SIZE);
void copy_arr(int32_t arr[], int32_t arr_copy[], const uint8_t SIZE)
{
	for (size_t i = 0; i <= SIZE; i++)
	{
		arr_copy[i] = arr[i];
	}
}


int main()
{
	const uint8_t SIZE = 20;
	int32_t arr[SIZE] = {};
	int32_t arr_copy[SIZE] = {};

	int32_t number = 0;

	srand(time(NULL));

	enterNumbers(arr, SIZE, number);

	std::cout << "Your numbers: ";

	copy_arr(arr, arr_copy, SIZE);

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

	qSort(arr_copy, SIZE, ptr_time_qsort);

	std::cout << "Sort numbers by qsort: ";

	showNumbers(arr_copy, SIZE);

	auto compare(uint32_t*ptr_time_bsort, uint32_t*ptr_time_qsort);

	std::cout << "\n\nTime of buble sort: " << time_bsort;
	std::cout << "\nTime of quick sort: " << time_qsort;

	if ((*ptr_time_bsort) < (*ptr_time_qsort))
	{
		std::cout << "\n\nThis time buble sort is better!" << std::endl;
	}
	else if ((*ptr_time_bsort) > (*ptr_time_qsort))
	{
		std::cout << "\n\nThis time quick sort is better!" << std::endl;
	}
	else
	{
		std::cout << "\n\nThis time quick sort and buble sort are the same!" << std::endl;
	}

	
	_getch();
	return 0;
}









