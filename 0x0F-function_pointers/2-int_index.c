#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: array of integers to be searched
 * @size: array size
 * @cmp: pointer to the function to be used to compare values
 * Return: index of element (if cmp != 0),
 * -1 otherwise (no element, size <= 0, etc)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, found;

	if (array != NULL && size != 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			found = cmp(array[i]);
			if (found)
			{
				break;
			}
		}

		return (i);
	}

	else
	{
		return (-1);
	}
}
