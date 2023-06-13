#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * if NULL is passed, treat it as an empty string
 * Return: pointer should point to a newly allocated space in memory which
 * contains the elements of s1, followed by the elements of s2,
 * and null terminated, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, sum;
	char *concatstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	i++;

	for (j = 0; s2[j] != '\0'; j++)
		;

	sum = i + j;
	concatstr = malloc(sizeof(char) * sum);
	i = j = 0;

	if (concatstr == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concatstr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concatstr[i] = s2[j];
		i++, j++;
	}

	return (concatstr);

}
