#include"main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int length;

	if (*s)
	{
		length++;
		_strlen_recursion(s + 1);
	}

	return (length);
}
