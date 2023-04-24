#include<stdio.h>

/**
 * main - print lowercase alphabet except q and e
 * Return: Always 0
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
	{
		if (character == 'e' || character == 'q')
		{
			continue;
		}

		putchar(character);
	}

	putchar('\n');
	return (0);
}
