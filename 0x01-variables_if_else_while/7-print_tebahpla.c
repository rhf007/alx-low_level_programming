#include<stdio.h>
/**
 * main - print reverse lowercase alphabet
 * Return: Always 0
 */
int main(void)
{
	char character;

	for (character = 'z'; character >= 'a'; character--)
	{
		putchar(character);
	}

	putchar('\n');
	return (0);
}
