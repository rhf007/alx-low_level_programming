#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc. if malloc fails,
 * the function should cause normal process termination with a
 * status value of 98
 * @b: size of the memory to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	/**
	 * void because task didnt specify type + function is already void*
	 */
	void *memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}

	return (memory);
}
