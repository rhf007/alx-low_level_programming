#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: list head
 * @str: Node string
 * Return: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i;

	newnode = malloc(sizeof(list_t));

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
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
