#include <iostream>
#include <conio.h>

//функция определяет длинну числа и создает масcив int из char
void create_array(char number_one[], int32_t number_one_arr[], const int32_t SIZE);
void create_array(char number_one[], int32_t number_one_arr[], const int32_t SIZE)
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
void show_result(int32_t number_one_arr[], const int32_t SIZE);
void show_result(int32_t number_one_arr[], const int32_t SIZE)
{
	std::cout << "The result of the sum of the numbers is ";
	for (size_t i = 0; i < SIZE; i++)
	{
		//if (number_one_arr[i] != 0) 
		//{
		std::cout << number_one_arr[i];
		//}
	}
	std::cout << std::endl;
}

//функция перемещает все элемнты массива в конец
void move_array(int32_t number_one_arr[], const int32_t SIZE);
void move_array(int32_t number_one_arr[], const int32_t SIZE)
{
	while (number_one_arr[SIZE - 1] == 0) {
		int32_t temp = number_one_arr[SIZE - 1];
		for (size_t i = SIZE - 1; i > 0; i--)
		{
			number_one_arr[i] = number_one_arr[i - 1];
		}
		number_one_arr[0] = temp;
	}
}

int main()
{
	const int32_t SIZE = 10;
	char number_one[SIZE] = "";
	char number_two[SIZE] = "";
	char mark = 0;

	std::cout << "Enter first number:";
	std::cin >> number_one;

	std::cout << "Enter second number:";
	std::cin >> number_two;

	int32_t number_one_arr[SIZE] = {};
	int32_t number_two_arr[SIZE] = {};

	create_array(number_one, number_one_arr, SIZE);

	create_array(number_two, number_two_arr, SIZE);

	move_array(number_one_arr, SIZE);

	move_array(number_two_arr, SIZE);
	do {
		std::cout << "Enter mark (\"+\" or \"-\"): ";
		std::cin >> mark;
		if (mark == '+')
		{
			int32_t ten = 0;  //для переноса единицы

			for (size_t i = SIZE - 1; i > 0; i--)
			{
				number_one_arr[i] += ten;
				ten = 0;
				number_one_arr[i] += number_two_arr[i];
				ten = number_one_arr[i] / 10;
				number_one_arr[i] %= 10;
			}
			show_result(number_one_arr, SIZE);
		}
		
		else if (mark == '-')
		{
			int32_t ten = 0;  //для переноса единицы
			int32_t one = 0;  
			
			for (size_t i = SIZE - 1; i > 0; i--)
			{
				number_one_arr[i] -= one;
				if (number_one_arr[i] < number_two_arr[i])
				{
					ten = 10;
					one = 1;
				}
				number_one_arr[i] += ten;
				number_one_arr[i] -= number_two_arr[i];
				
			}
			show_result(number_one_arr, SIZE);
		}
		else
		{
			std::cout << "Wrong symbol of mark!";
		}
	} while ((mark != '+') && (mark != '-'));

	_getch();
	return 0;
}