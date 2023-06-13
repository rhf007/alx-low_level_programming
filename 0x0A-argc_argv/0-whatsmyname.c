#include <stdio.h>

/**
 * main - print the program name, followed by a new line
 * @argc: number of command-line arguments
 * @argv: command-line arguments
 * Return: 0 on success
 */
int main(__attribute__((unused)) int argc, char const *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
