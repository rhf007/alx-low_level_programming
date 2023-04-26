#include"main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet with _putchar 10 times
 */

void print_alphabet_x10(void)
{
	char character;

	for (int i = 0; i <= 9; i++)
	{
		for (character = 'a'; character <= 'z'; character++)
		{
			_putchar(character);
		}

		_putchar('\n');
	}
}
