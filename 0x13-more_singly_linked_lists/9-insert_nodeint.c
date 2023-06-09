#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position
 * @head: pointer to the head itself not the list
 * @idx: index to insert node at
 * @n: node data
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *newnode;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = *head;
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	while (ptr != NULL && i < idx)
	{
		if (i == (idx - 1))
		{
			newnode->next = ptr->next;
			ptr->next = newnode;
			return (newnode);
		}

		i++;
		ptr = ptr->next;
	}

	free(newnode);
	return (NULL);
}
