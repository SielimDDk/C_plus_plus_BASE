#include <iostream>
#include <conio.h>
#include <stdio.h>

int main()
{
	int NUMBER = 0;
	int N = 1;
	int K = 0;
	float summ = 0;
	float count = 0;

	std::cout << "Enter your number please: ";
	std::cin >> NUMBER;

	do
	{
		int X = 0;
		
		NUMBER /= N;
		N = 10;
		X = NUMBER % 10;
		std::cout << "Numeral #"<< count+1 << ":" << X << ";\n";
		count++;
		summ += X;
	} while (NUMBER >= 9);
	
	std::cout << "The amount of the numerals: " << count << std::endl;
	std::cout << "The summ of the numerals: " << summ << std::endl;
	std::cout << "The average of numerals: " << summ / count << std::endl;
	
	

	_getch();
	return 0;
}