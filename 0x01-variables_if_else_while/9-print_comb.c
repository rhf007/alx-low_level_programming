#include<stdio.h>

/**
 * main - print all possible single digit number combination
 * Return: Always 0
 */
int main(void)
{
	int num;
	
	for (num = 48; num <= 57; num++)
	{
		putchar(num);

		while (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
