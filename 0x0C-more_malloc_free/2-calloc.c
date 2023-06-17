#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * the constant byte b
 * @s: string
 * @b: constatnt byte/character
 * @n: number of bytes
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocate memory for an array of nmemb elements of size bytes each,
 * using malloc. The memory is set to zero
 * @nmemb: number of elements in array
 * @size: size of each element
 * Return: a pointer to the allocated memory(SUCCESS). If nmemb or size is 0,
 * then _calloc returns NULL/If malloc fails, then _calloc returns NULL(FAIL)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	_memset(arr, 0, (nmemb * size));

	return (arr);
}
