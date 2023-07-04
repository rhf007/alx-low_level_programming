#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node at the end of a list
 * @head: pointer to the head itself not the list
 * @n: newnode data
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = newnode;

	return (newnode);
}
