#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - a function that adds a new node at the end of a list_t list
 * @head: pointer to the pointer that points to the list
 * @str: string to fill the new node with
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));
	list_t *tmpnode = *head;
	int i;

	if (newnode == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{

		;
	}

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (tmpnode->next)
	{
		tmpnode = tmpnode->next;
	}

	tmpnode->next = newnode;
	return (newnode);
}
