#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cmath>

int main(){
	float a = 0;
	float b = 0;
	float c = 0;
	float x = 0;
	
	float x1 = 0;
	float x2 = 0;

	std::cout << "We have equation: a * x^2 + b * x + c = 0\n\n";
	std::cout << "Enter a:" << std::endl;
	std::cin >> a;
	std::cout << "Enter b:" << std::endl;
	std::cin >> b;
	std::cout << "Enter c:" << std::endl;
	std::cin >> c;

	float D = (b * b) - (4 * a * c);

	if (D > 0)
	{
		x1 == (-b + std::sqrt(D)) / (2 * a);
		x2 == (-b - std::sqrt(D)) / (2 * a);
		std::cout << "The equation has 2 solutions: " << x1 << " and " << x2 << ":" << std::endl;
	}
	else if (D < 0)
	{
		std::cout << "The equation doesn't have solutions\n";
	}
	else
	{
		x == (-b) / (2 * a);
		std::cout << "The equation's solution: " << x << std::endl;
	}

	_getch();
	return 0;
}