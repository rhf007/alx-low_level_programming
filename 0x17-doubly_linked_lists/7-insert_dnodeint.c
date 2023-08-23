#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: list/pointer to the head of the list
 * @idx: index to insert at
 * @n: node data
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current = *h, *newnode;

	if (*h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	while (i < idx)
	{
		current = current->next;
		i++;
	}

	if (current->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = current;
	newnode->next = current->next;
	current->next->prev = newnode;
	current->next = newnode;

	return (newnode);
}
