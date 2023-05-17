#include <stdio.h>

/**
 * main - prints all arguments the program receives. All arguments should be
 * printed, including the first one. Only print one argument per line,
 * ending with a new line
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
