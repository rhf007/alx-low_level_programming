#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: the number to check a bit from
 * @index: bit index
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitidx;

	if (index > 63)
	{
		return (-1);
	}

	bitidx = (n >> index) & 1;
	return (bitidx);
}
