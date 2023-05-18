#include"main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars & initialize it with a specific char
 * (all elements are the same char)
 * @size: array size
 * @c: char to initialize with
 * Return: a pointer to the array, or NULL if size = 0 or in case of failure
 */
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	/**
	 * NOTE: I didn't free what I malloc'd here because I have to return it
	 * instead, I can free it in the main program after using this function
	 */
	return (arr);
}