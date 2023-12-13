#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: If value is not present in array or if array is NULL, your
 * function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, r, l;

	if (array == NULL)
	{
		return (-1);
	}

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (mid = l; mid < r; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = l + (r - l) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			r = mid - 1;
		else
			l = mid + 1;
	}

	return (-1);
}
