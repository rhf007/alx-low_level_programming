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
	int num, i;
	int *arr;

	num = max - min;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (num + 1));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);

}
