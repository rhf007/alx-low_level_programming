#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function to choose the right operation
 * @s: string to be searched
 * Return: pointer to the right function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s != NULL && s[0] == ops[i].op[0] && !s[1])
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
