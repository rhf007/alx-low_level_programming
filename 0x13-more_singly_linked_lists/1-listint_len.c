#include "lists.h"

/**
 * listint_len -  a function that returns the number of elements
 * in a linked list
 * @h: list head/pointer
 * Return: number of list elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
