#include"main.h"
int my_sqrt(int n, int startnum);

/**
 * _sqrt_recursion - the natural square root of a number
 * @n: the number
 * Return: Square root of n, -1 if n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (my_sqrt(n, 0));
}

/**
 * my_sqrt - actual square root finder
 * @n: number whose square root is to be found
 * @startnum: an iterator. starting from it, a square root shall be found
 * Return: square root of n
 */
int my_sqrt(int n, int startnum)
{
	if (startnum * startnum == n)
	{
		return (startnum);
	}
	else
	{
		return (-1);
	}

	return (my_sqrt(n, startnum + 1));
}
