#include"main.h"

/**
 * times_table - print the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;

			if (product == 0)
			{
				_putchar(48 + product);
			}
			else if (product < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(48 + product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(48 + (product / 10));
				_putchar(48 + (product % 10));
			}
		}

		_putchar('\n');
	}
}
