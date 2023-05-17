#include <stdio.h>

/**
 * main - print the number of arguments passed into the program
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 * Return: 0 on success
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
