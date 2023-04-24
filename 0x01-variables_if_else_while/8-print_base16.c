#include<stdio.h>

/**
 * main - print all base16 numbers
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
	}

	for (num = 97; num <= 102; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
