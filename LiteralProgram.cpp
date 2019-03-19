#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	printf("This is integer literal: %d\n", 10);									            // целочисленный литерал в десятичной форме
	printf("This is integer literal in hex format 0xA =  %d\n", 0xA);		    	// целочисленный литерал в восьмеричной форме
	printf("This is integer literal represent in octal format: %o\n", 10);		//целочисленный литерал в шестнадцетиричной форме
	printf("This is float literal: %f\n", 1.25);									            //вещественный литерал без экпонинцеальной части
	printf("This is float literal: %f\n", 1.25e1);								            //вещественный литерал с экпонинцеальной частью
	printf("This is char literal: %c\n", 'c');									              //символьный литерал
	printf("This is string literal: %s\n", "I learn C++");					        	//строковый литерал

	cout << "There are boolian literals: ";
	cout << boolalpha;
	cout << true << " or " << false << endl;									                //логические(булевые) литералы
	_getch();
	return 0;
}