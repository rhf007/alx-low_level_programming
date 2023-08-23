#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: list to raverse
 * @index: index to go for
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (i != index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
