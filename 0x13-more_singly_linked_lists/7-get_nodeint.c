#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: list head/pointer
 * @index: index of node
 * Return: node at nth position, null otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = head;

	while (ptr != NULL && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	return (ptr);
}
