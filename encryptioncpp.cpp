#include <iostream>
#include <conio.h>


int main()
{
	const uint8_t SIZE = 20;
	char message[SIZE] = "";

	std::cout << "Enter message: ";
	std::cin >> message;

	// меняем местами символы строки(шифруем)
	for (size_t i=0; (i < SIZE) && (message[i+1] != '\0'); i+=3)
	{
		char ch = message[i];
		message[i] = message[i + 2];
		message[i + 2] = message[i + 1];
		message[i + 1] = ch;
	}

	std::cout << "Encryption text: ";
	std::cout << message;   //зашифрованный текст
	std::cout << std::endl;
	
	for (size_t i=0; (i < SIZE) && (message[i+1] != '\0'); i+=3)
	{
		char ch = message[i];
		message[i] = message[i + 1];
		message[i + 1] = message[i + 2];
		message[i + 2] = ch;
	}

	std::cout << "Decryption text: ";
	std::cout << message;   //расшифрованный текст
	std::cout << std::endl;

	_getch();
	return 0;
}