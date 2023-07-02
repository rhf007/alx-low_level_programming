#include "lists.h"
#include <stdlib.h>

/**
 * list_len - a function that returns the number of elements in a
 * linked list_t list
 * @h: the list to get the length of
 * Return: Number of elements/nodes in a list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}

	return (i);
}
