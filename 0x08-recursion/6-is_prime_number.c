#include "main.h"
int my_prime(int n, int startnum);

/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (my_prime(n, 2));
}

/**
 * my_prime - actual prime finder
 * @n: number to be checked
 * @startnum: iterator
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int my_prime(int n, int startnum)
{
	if (startnum == 1)
	{
		return (1);
	}

	if (n % startnum == 0 && startnum > 0)
	{
		return (0);
	}

	return (my_prime(n, (startnum - 1)));
}
