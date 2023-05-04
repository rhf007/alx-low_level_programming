#include"main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: the string
 */
void puts2(char *str)
{
	int lencount = 0;
	int i;

	while (*str != '\0')
	{
		lencount++;
		str++;
	}

	for (i = 0; i < lencount - 1; i = i + 2)
	{
		_putchar(str[i]);
	}
}
