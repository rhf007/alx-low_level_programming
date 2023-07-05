#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes the node at index of a list
 * @head: pointer to the head itself not the list
 * @index: index to delete node at
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *node;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		return (-1);
	}

	ptr = *head;

	if (index == 0)
	{
		
		*head = ptr->next;
		free(ptr);
		return (1);
	}

	while (i < index)
	{
		if (ptr == NULL || ptr->next == NULL)
		{
			return (-1);
		}
		ptr = ptr->next;
		i++;
	}

	node = ptr->next;
	ptr->next = node->next;
	free(node);
	return (1);
}
