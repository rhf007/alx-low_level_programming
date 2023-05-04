#include"main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}

	_putchar('\n');
}
