#include"main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: the string
 */
void puts_half(char *str)
{
	int lencount =  0;

	while (*str != '\0')
	{
		lencount++;
		str++;
	}

	for (lencount /= 2; str[lencount] != '\0'; lencount++)
	{
		_putchar(str[lencount]);
	}

	_putchar('\n');
}
