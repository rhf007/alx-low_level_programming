#include<stdio.h>

/**
 * main - print all base10 single digit numbers starting from 0 with putchar
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 48; num <= 56; num++)
	{
		putchar(num);
	}

	putchar('\n');
	return (0);
}
