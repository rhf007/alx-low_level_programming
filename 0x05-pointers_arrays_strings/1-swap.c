#include"main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first integer
 * @b:second integer
 */
void swap_int(int *a, int *b)
{
	int tmpval = *a;
	*a = *b;
	*b = tmpval;
}
