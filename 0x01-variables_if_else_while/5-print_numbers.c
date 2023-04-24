#include<stdio.h>

/**
 * main - print all base10 single digit numbers starting from 0
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		printf("%d", num);
	}

	putchar('\n');
	return (0);
}
