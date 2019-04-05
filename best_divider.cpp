#include <iostream>
#include <cstdio>
#include <conio.h>

int main()
{
	
	char exit = 'y';

	do {

		if (exit=='y') {
			printf("Enter your number: ");
			uint64_t number = 0;
			std::cin >> number;
			uint64_t divider = number;
			uint64_t count = 0;
			while ((divider <= number)&&(divider > 0))
			{
				divider--;
				
				uint64_t value = number%divider;
				if (value==0) 
				{
					count++;
					std::cout << "Divider #" << count << " is " << divider << std::endl;
				}
				else {}
			}
			
		}

		printf("Do you want to continue?\ny - yes\nn - no\n");
		std::cin >> exit;
			
		if ((exit != 'y')&&(exit!='n')) {
			printf("WRONG SYMBOL!!!\n");
		}
		
	} while (exit!='n');

	if (exit == 'n')
		{
		printf("Bye bye!");
		}

	_getch();
	return 0;
}
	