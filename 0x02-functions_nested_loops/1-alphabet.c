#include"main.h"

/**
 * print_alphabet - print lowercase alphabet with _putchar
 * Return: Always 0
 */
void print_alphabet(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		_putchar(character);
	}

	_putchar('\n');
}
