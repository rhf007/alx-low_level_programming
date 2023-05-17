#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers. print the result of the multiplication,
 * followed by a new line. the two numbers and result of the multiplication
 * can be stored in an integer.
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 * Return: 0 on success, 1 on failure (& print "Error\n")
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
