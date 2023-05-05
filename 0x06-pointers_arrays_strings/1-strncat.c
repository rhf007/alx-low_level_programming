#include "main.h"

/**
 * _strncat - concatenates two strings. it will use at most n bytes from src;
 * and src does not need to be null-terminated if it contains n or more byte
 * @dest: destination string
 * @src: source string
 * @n: concatenation limit
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int lencount1, lencount2;

	for (lencount1 = 0; dest[lencount1]; lencount1++)
	{
		;
	}

	for (lencount2 = 0; lencount2 < n && src[lencount2] != '\0'; lencount2++)
	{
		dest[lencount1 + lencount2] = src[lencount2];
	}

	dest[lencount1 + lencount2] = '\0';

	return (dest);
}
