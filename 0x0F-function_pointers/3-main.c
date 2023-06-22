#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform an operation on two numbers
 * @argc: number of arguments(numbers)
 * @argv: arguments(numbers)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int), a, b;

	if (argc != 4 || argv == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' && b == 0)  || (argv[2][0] == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}
