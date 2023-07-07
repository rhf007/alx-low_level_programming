#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: Number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/**
	 * could've used sizeof(n) * 8 again for index for clarity but it's always
	 * the same so i didnt use it
	 */
	unsigned long int index = 63, one = 1, xor = n ^ m;
	unsigned int count = 0;

	while (index != 0)
	{
		if ((xor) & one)
		{
			count++;
		}

		xor = xor >> 1;
		index--;
	}

	return (count);
}
