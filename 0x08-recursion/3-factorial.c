#include"main.h"

/**
 * factorial - the factorial of a given number
 * @n: the number
 * Return: factorial of n. -1 if n is negative, 1 if n is 0 or 1,
 * normal factorial otherwise
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
