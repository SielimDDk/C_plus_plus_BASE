#include <iostream>
#include <conio.h>

//gets length of array and creates an array int
void create_array(char number_one[], int32_t number_one_arr[], const int32_t SIZE, size_t *ptr_count_one)
{
	for (size_t i = 0; (i < SIZE) && (number_one[i] != '\0'); i++)
	{
		if ((number_one[i] >= '0') && (number_one[i] <= '9'))
		{
			number_one_arr[i] = number_one[i] - '0';
		}
		(*ptr_count_one)++;
	}
}


//shows result
void show_result(int32_t number_one_arr[], const int32_t SIZE)
{

	for (size_t i = 0; i < SIZE; i++)
	{
		//if (number_one_arr[i] != 0) 
		//{
		std::cout << number_one_arr[i];
		//}
	}
	std::cout << std::endl;
}

//moves elements to end of array
void move_array(int32_t number_one_arr[], const int32_t SIZE, size_t count_one)
{
	uint32_t count_f = SIZE - count_one;
	while (count_f > 0) {
		int32_t temp = number_one_arr[SIZE - 1];
		for (size_t i = SIZE - 1; i > 0; i--)
		{
			number_one_arr[i] = number_one_arr[i - 1];
		}
		number_one_arr[0] = temp;
		count_f--;
	}
}

int main()
{
	char answer = 'y';
	do {
		if (answer == 'y')
		{
			const int32_t SIZE = 20;
			char number_one[SIZE] = "";
			char number_two[SIZE] = "";
			char mark = 0;

			std::cout << "Enter first number:";
			std::cin >> number_one;

			std::cout << "Enter second number:";
			std::cin >> number_two;

			//create arrays
			int32_t number_one_arr[SIZE] = {};
			int32_t number_two_arr[SIZE] = {};

			//create counters
			size_t count_one = 0;
			size_t*ptr_count_one = &count_one;
			size_t count_two = 0;
			size_t*ptr_count_two = &count_two;
			uint32_t count = SIZE - count_one + 1;

			create_array(number_one, number_one_arr, SIZE, ptr_count_one);

			create_array(number_two, number_two_arr, SIZE, ptr_count_two);

			move_array(number_one_arr, SIZE, count_one);

			move_array(number_two_arr, SIZE, count_two);

			do {
				std::cout << "Enter mark (\"+\", \"-\" or \"*\"): ";
				std::cin >> mark;
				if (mark == '+')
				{
					int32_t ten = 0;  //for +1

					for (size_t i = SIZE - 1; i > 0; i--)
					{
						number_one_arr[i] += ten;
						ten = 0;
						number_one_arr[i] += number_two_arr[i];
						ten = number_one_arr[i] / 10;
						number_one_arr[i] %= 10;
					}
					std::cout << "The result of the sum of the numbers is ";
					show_result(number_one_arr, SIZE);
				}

				else if (mark == '-')
				{
					int32_t ten = 0;  //for +10
					int32_t one = 0;  //for -1
					if (count_one >= count_two)
					{
						for (size_t i = SIZE - 1; i > 0; i--)
						{
							number_one_arr[i] -= one;
							one = 0;
							if (number_one_arr[i] < number_two_arr[i])
							{
								ten = 10;
								one = 1;
							}
							number_one_arr[i] += ten;
							number_one_arr[i] -= number_two_arr[i];
							ten = 0;
						}
					}

					else if (count_one < count_two)
					{
						int32_t ten = 0;  //for +10
						int32_t one = 0;  //for -1
						for (size_t i = SIZE - 1; i > 0; i--)
						{
							number_two_arr[i] -= one;
							one = 0;
							if (number_two_arr[i] < number_one_arr[i])
							{
								ten = 10;
								one = 1;
							}
							number_two_arr[i] += ten;
							number_two_arr[i] -= number_one_arr[i];
							ten = 0;
						}
					}
					std::cout << "The result of the subtraction of the numbers is ";
					show_result(number_one_arr, SIZE);
				}

				else if (mark == '*')
				{
					int32_t ten = 0;  ////for +tens

					
					int32_t result[SIZE] = {};
					int32_t res_line[SIZE] = {};
					size_t count = 0;
					size_t count_t = 0;

					if (count_one >= count_two)
					{
						for (size_t i = SIZE - 1; i > 0; i--)
						{
							count_t = count;
							for (size_t j = SIZE - 1; j > 0; j--)
							{
								ten = 0;
								res_line[j] = (number_two_arr[i] * number_one_arr[j]) + ten;
								ten = res_line[j] / 10;
								res_line[j] %= 10;
							}
							
							while (count_t > 0)
							{
								int32_t temp = res_line[0];
								
								for (size_t i = 0; i < SIZE-1; i++)
								{
									res_line[i] = res_line[i + 1];
								}
								res_line[SIZE-1] = temp;
								count_t--;
							}
							
							ten = 0;
							for (size_t i = SIZE - 1; i > 0; i--)
							{
								result[i] += ten;
								ten = 0;
								result[i] += res_line[i];
								ten = res_line[i] / 10;
								result[i] %= 10;
							}
							count++;
						}
					}
					if (count_one < count_two)
					{
						for (size_t i = SIZE - 1; i > 0; i--)
						{
							count_t = count;
							for (size_t j = SIZE - 1; j > 0; j--)
							{
								ten = 0;
								res_line[j] = (number_one_arr[i] * number_two_arr[j]) + ten;
								ten = res_line[j] / 10;
								res_line[j] %= 10;
							}

							while (count_t > 0)
							{
								int32_t temp = res_line[0];

								for (size_t i = 0; i < SIZE - 1; i++)
								{
									res_line[i] = res_line[i + 1];
								}
								res_line[SIZE - 1] = temp;
								count_t--;
							}

							ten = 0;
							for (size_t i = SIZE - 1; i > 0; i--)
							{
								result[i] += ten;
								ten = 0;
								result[i] += res_line[i];
								ten = res_line[i] / 10;
								result[i] %= 10;
							}
							count++;
						}
					}
					std::cout << "The result of the multiplication of the numbers is ";
					show_result(result, SIZE);
				}

				else
				{
					std::cout << "Wrong symbol of mark!";
				}

			} while ((mark != '+') && (mark != '-') && (mark != '*'));


		}

		std::cout << "Do you want to continue? (y - yes / n - no): ";
		std::cin >> answer;

		if ((answer != 'n') && (answer != 'y'))
		{
			std::cout << "Wrong symbol!" << std::endl;
		}

	} while ((answer != 'n'));

	_getch();
	return 0;
}