#include <iostream>
#include <conio.h>

//функция определяет длинну числа и создает масcив int из char
void create_array(char number_one[], uint32_t number_one_arr[], const uint8_t SIZE);
void create_array(char number_one[], uint32_t number_one_arr[], const uint8_t SIZE)
{
	for (size_t i = 0; (i < SIZE) && (number_one[i] != '\0'); i++)
	{
		if ((number_one[i] >= '0') && (number_one[i] <= '9'))
		{
			number_one_arr[i] = number_one[i] - '0';
		}
	}
}


//функция вывода результата
void show_result(uint32_t number_one_arr[], const uint32_t SIZE);
void show_result(uint32_t number_one_arr[], const uint32_t SIZE)
{
	std::cout << "The result of the sum of the numbers is ";
	for (size_t i = 0 ; i < SIZE; i++)
	{
		//if (number_one_arr[i] != 0) 
		//{
			std::cout << number_one_arr[i];
		//}
	}
	std::cout << std::endl;
}

//функция перемещает все элемнты массива в конец
void move_array(uint32_t number_one_arr[], const uint32_t SIZE);
void move_array(uint32_t number_one_arr[], const uint32_t SIZE)
{
	while (number_one_arr[SIZE - 1] == 0) {
		uint32_t temp = number_one_arr[SIZE - 1];
		for (size_t i = SIZE - 1; i > 0; i--)
		{
			number_one_arr[i] = number_one_arr[i - 1];
		}
		number_one_arr[0] = temp;
	}
}

int main()
{
	const uint32_t SIZE = 50;
	char number_one[SIZE] = "";
	char number_two[SIZE] = "";

	std::cout << "Enter first number:";
	std::cin >> number_one;

	std::cout << "Enter second number:";
	std::cin >> number_two;

	uint32_t number_one_arr[SIZE] = {};
	uint32_t number_two_arr[SIZE] = {};

	create_array(number_one, number_one_arr, SIZE);

	create_array(number_two, number_two_arr, SIZE);

	move_array(number_one_arr, SIZE);

	move_array(number_two_arr, SIZE);

	uint32_t ten = 0;  //для переноса единицы
		
	for (size_t i = SIZE - 1; i > 0; i--)
	{
		number_one_arr[i] += ten;
		ten = 0;
		number_one_arr[i] += number_two_arr[i];
		ten = number_one_arr[i] / 10;
		number_one_arr[i] %= 10;
	}

	show_result(number_one_arr, SIZE);

	_getch();
	return 0;
}