#include"main.h"
#include<stdlib.h>

/**
 * _strdup - return a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to be copied
 * Return: a pointer to a new string which is a duplicate of the string str,
 * NULL if str = NULL or if insufficient memory was available
 */
char *_strdup(char *str)
{
	int i, j;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	i++;
	copy = malloc(sizeof(char) * i);

	if (copy == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		copy[j] = str[j];
	}

	return (copy);
}
