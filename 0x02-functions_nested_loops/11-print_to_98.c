#include"main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line
 * @n: beginning number
 */
void print_to_98(int n)
{
	int i, j;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + 48);
			
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}

	if (n > 98)
	{
		for (j = n; j >= 98; j--)
		{
			_putchar(j + 48);
			
			if (j != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		_putchar(48 + (n / 10));
		_putchar(48 + (n % 10));
	}
}
