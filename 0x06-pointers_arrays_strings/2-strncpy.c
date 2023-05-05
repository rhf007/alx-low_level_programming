#include"main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: limit
 * Return: pointer to dest
 */
_strncpy(char *dest, char *src, int n)
{
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (i ; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
