#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings. If n is greater or equal to the
 * length of s2 then use the entire string s2. if NULL is passed, treat it as
 * an empty string
 * @s1: 1st string
 * @s2: 2nd string
 * @n: how much bytes from s2 to be concatenated to s1
 * Return: a newly allocated space in memory, which contains s1, followed by
 * the first n bytes of s2, and null terminated,If the function fails, it
 * should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
		;

	for (len2 = 0; s2[len2] != '\0'; len2++)
		;

	concat = malloc(len1 + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	concat[i] = '\0';
	return (concat);
}
