#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: bit index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int one = 1;

	if (index > 63)
	{
		return (-1);
	}

	*n = *n & (~(one << index));
	return (1);
}
