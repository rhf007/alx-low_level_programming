#include"main.h"

/**
 * jack_bauer - print every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(48 + (hours / 10));
			_putchar(48 + (hours % 10));
			_putchar(':');
			_putchar(48 + (minutes / 10));
			_putchar(48 + (minutes % 10));
			_putchar('\n');
		}
	}
}
