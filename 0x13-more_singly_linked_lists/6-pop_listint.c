#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node of a list,
 * and returns the head node’s data
 * @head: pointer to the head itself not the list
 * Return: head node data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int data;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}

	data = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;
	return (data);
}
