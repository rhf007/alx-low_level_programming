#include<stdio.h>

/**
 * main - print all possible combinations of two two-digit numbers with putchar
 * Return: Always 0
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 48; num1 <= 56; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
		{
			if (num2 > num1)
			{
				putchar(num1);
				putchar(num2);

				if (num1 != 56 || num2 != 57)
				{
					putchar(' ');
				}

				for (num3 = 48; num3 <= 58; num3++)
				{
					for (num4 = 48; num4 <= 59; num4++)
					{
						if (num4 > num3)
						{
							putchar(num3);
							putchar(num4);

							if (num3 != 58 || num4 != 59)
							{
								putchar(',');
								putchar(' ');
							}
						}
					}
		
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
