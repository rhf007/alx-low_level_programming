#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - a function that prints anything
 * @format: format specifier
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *my_str, *my_sprtr;
	va_list args;

	va_start(args, format);
	my_sprtr = "";
	if (format)
	{
		while (format[i])
		{
			switch(format[i])
			{
				case'c':
					printf("%s%c", my_sprtr, va_arg(args, int));
					break;
				case'i':
					printf("%s%d", my_sprtr, va_arg(args, int));
					break;
				case'f':
					printf("%s%f", my_sprtr, va_arg(args, double));
					break;
				case's':
					my_str = va_arg(args, char*);

					if (my_str == NULL)
					{
						printf("(nil)");
					}

					printf("%s%s", my_sprtr, my_str);
					break;
				default:
					i++;
					continue;
			}

			my_sprtr = ", ";
			i++;
		}
	}

	va_end(args);
	printf("\n");
}
