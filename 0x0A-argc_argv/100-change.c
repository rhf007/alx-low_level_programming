#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum no. of coins to calculate change for
 * an amount of money
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 * Return: 0 on success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, dpennies, pennies, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (1);
	}

	cents = atoi(argv[1]);
	quarters = cents / 25;
	cents -= quarters * 25;
	dimes = cents / 10;
	cents -= dimes * 10;
	nickels = cents / 5;
	cents -= nickels * 5;
	dpennies = cents / 2;
	cents -= dpennies * 2;
	pennies = cents / 1;
	cents -= pennies * 1;
	coins = quarters + dimes + nickels + dpennies + pennies;

	printf("%d\n", coins);
	return (0);
}

