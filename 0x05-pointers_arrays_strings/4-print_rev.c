#include"main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string
 */
void print_rev(char *s)
{
	int lencount = 0;
	int rev;

	while (*s != '\0')
	{
		lencount++;
		s++;
	}

	s--;

	for (rev = lencount; rev > 0; rev--)
	{
		_putchar(*s);
	}

	_putchar('\n');
}
