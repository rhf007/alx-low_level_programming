#include"main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: the number from which the last digit will be returned
 * Return: hthe last digit of a number
 */
int print_last_digit(int n)
{
	int last = n % 10;
	_putchar(48 + last);
	return (last);
}
