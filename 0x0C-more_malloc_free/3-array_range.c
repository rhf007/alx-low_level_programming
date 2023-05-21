#include "main.h"
#include <stdlib.h>

/**
 * array_range -  create an array of integers. The array created should
 * contain all the values from min (included) to max (included),
 * ordered from min to max. 
 * @min: lower bound of range
 * @max: upper bound of range
 * Return: pointer to the newly created array(SUCCESS), If min > max/malloc
 * fails, return NULL(FAIL)
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc(sizeof(int) * (max - min + 1));

	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}

	return (array);
}
