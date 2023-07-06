#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	/*bit is 64, ones to keep track of found 1s*/
	int bit = sizeof(n) * 8, ones = 0;

	/*until bit = 0*/
	while (bit--)
	{
		/**
		 * called bitmask and used to go through every bit of a number
		 * if it evaluates to be true, print 1 and increment ones
		 */
		if (n & 1L << bit)
		{
			_putchar('1');
			ones++;
		}
		/**
		 * if bit is zero but there are ones, print 0
		 */
		else if (ones != 0)
		{
			_putchar('0');
		}
	}

	/**
	 * if the whole while loop didnt yield anything then it was a 0
	 * then print 0
	 */
	if (ones == 0)
	{
		_putchar('0');
	}
}
