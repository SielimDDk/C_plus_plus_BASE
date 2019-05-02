#include <iostream>
#include <conio.h>
#include <cmath>



void reverse(char str[], const unsigned int sz)
{
	unsigned int n = sz / 2;
	size_t j = sz;
	for (size_t i = 0; i < n; i++)
	{
		unsigned int temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j--;
	}
}

void rotate(char str[], const unsigned int sz)
{
	int32_t temp = str[0];
	for (size_t i = 0; i < sz; i++)
	{
		str[i] = str[i + 1];
	}
	str[sz-1] = temp;
}

int main()
{
	const unsigned int SIZE = 50;
	const unsigned int sz = 3;
	char str[SIZE] = " ";
	
	std::cout << "Enter numbers: ";
	std::cin >> str;
	uint32_t var = 0;
	uint32_t number = 0;
	uint32_t ten = 0;
	uint32_t count = 0;

	for (size_t i = 0; (i < SIZE) && (str[i] != '\0'); i++)
	{
		count++;
	}

	count /= sz;
	
	for (size_t i = 0; i < count; i += sz)
	{
		var = 0;
		number = 0;
		ten = 1;
		uint32_t r = sz;
		for (size_t j = i; j < sz; j++)
		{
			var += std::pow(str[j] - '0' + 0, 3);
			ten = std::pow(10, (r-1));
			number += (str[j] - '0' + 0) * ten;
			r--;
		}
		
		if ((var / 2) == number)
		{
			reverse(str, sz);
		}
		else
		{
			rotate(str, sz);
		}
	}

	std::cout << str;

	_getch();
	return 0;
}

