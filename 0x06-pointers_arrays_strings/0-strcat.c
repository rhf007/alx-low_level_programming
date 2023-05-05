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
	int lencount1, lencount2, totalcount, i, j;
	char *tmp;
	tmp = dest;

	for (lencount1 = 0; dest[lencount1] != '\0'; lencount1++)
	{
		;
	}

	lencount1++;

	for (lencount2 = 0; src[lencount2] != '\0'; lencount2++)
	{
		;
	}

	lencount2++;
	totalcount = lencount1 + lencount2;

	for (j = lencount1; j < totalcount - lencount1; j++)
	{
		if (src[j] == '\0')
		{
			continue;
		}

		tmp[j] = src[j];
	}

	dest = tmp;
	return (dest);
}
