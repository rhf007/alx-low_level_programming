#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 * Return: a pointer to a new string which is a duplicate of the string str,
 * NULL if str = NULL/if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, j;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	cpy = malloc(sizeof(char) * i + 1);

	if (cpy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i + 1; j++)
	{
		cpy[j] = str[j];
	}

	return (cpy);
}
