#include"main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int lencount1, lencount2;

	for (lencount1 = 0; dest[lencount1] != '\0'; lencount1++)
	{
		;
	}

	for (lencount2 = 0; src[lencount2]; lencount2++)
	{
		dest[lencount1++] = src[lencount2];
	}

	return (dest);
}
