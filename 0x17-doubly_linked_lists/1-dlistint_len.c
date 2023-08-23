#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in a linked
 * dlistint_t list.
 * @h: the list
 * Return: number of elements in a list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num = 0;

	if (h == NULL || current == NULL)
	{
		return (num);
	}

	while (current != NULL)
	{
		num++;
		current = current->next;
	}

	return (num);
}
