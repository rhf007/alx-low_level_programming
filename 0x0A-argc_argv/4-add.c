#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers. Print the result, followed by a new line.
 * If no number is passed to the program, print 0, followed by a new line.
 * numbers and the addition of all the numbers can be stored in an int.
 * If one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 * Return: 0 on success, 1 on failure (& print "Error\n")
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *ch;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}

	/**
	 * the while loop iterates(backwards) through each argument
	 * excluding the first
	 * and ch points at each digit in a number
	 * so
	 * while: backward for arguments
	 * for: forwards for numbers
	 */
	while (--argc)
	{
		for (ch = argv[argc]; *ch; ch++)
		{
			if (*ch < '0' || *ch > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
