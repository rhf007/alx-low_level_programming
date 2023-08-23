#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: list/pointer to the head of the list
 * @n: content of the node to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}

	*head = newnode;
	return (newnode);
}
