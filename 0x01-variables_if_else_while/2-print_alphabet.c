#include<stdio.h>

/**
 * main - print lowercase alphabets with putchar
 * Return: Always 0
 */
int main(void)
{
	char character;

	for(character = 'a'; charcter <= 'z'; character++)
	{
		putchar(character);
	}
	putchar('\n');

	return (0);
}
