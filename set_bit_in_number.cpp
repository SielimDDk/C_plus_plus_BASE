#include <iostream>
#include <conio.h>
#include <stdio.h>

constexpr unsigned bit = 86;


int main(int argc, char const *argv[])
{
	unsigned number = bit;

	size_t count = 0;
	while (number != 0) {
		count += number & 1;
		number >>= 1;
	}
	printf("Bit set in number %d is %zd\n", bit, count);

	_getch();
	return 0;
}