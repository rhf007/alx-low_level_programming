#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to the head itself not the list
 * @n: new node data
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
