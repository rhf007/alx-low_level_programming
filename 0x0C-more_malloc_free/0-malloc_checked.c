#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc. if malloc fails,
 * the malloc_checked function should cause normal process termination with a
 * status value of 98
 * @b: size of the memory to be allocated
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	/**
	 * if b is 0, it stil means success not failure,
	 * this is why we use mem in the if, not b
	 */

	if (b == 0)
	{
		exit(98);
	}

	return (mem);
}
