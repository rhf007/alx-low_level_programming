#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: separator between strings
 * @n: number of arguments(strings)
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;
	char *temp_str;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		temp_str = va_arg(strs, char*);

		if (temp_str == NULL)
		{
			temp_str = "nil";
		}

		printf("%s", temp_str);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(strs);
}
