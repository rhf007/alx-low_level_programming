#include "main.h"
int a_prime(int n, int startnum);

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

	return (a_prime(n, 2));
}

/**
 * a_prime - actual prime finder
 * @n: number to be checked
 * @test: iterator
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int a_prime(int n, int test)
{
	if (test == 1)
	{
		return (1);
	}

	if (n % test == 0 && test > 0)
	{
		return (0);
	}

	return (a_prime(n, (test - 1)));
}
