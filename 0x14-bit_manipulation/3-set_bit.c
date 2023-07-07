#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: bit index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index > 63)
	{
		return (-1);
	}

	*n = *n | (one << index);
	return (1);
}
