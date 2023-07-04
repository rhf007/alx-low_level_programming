#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a list
 * @head: list head/pointer
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		listint_t *tmp = head;

		head = head->next;
		free(tmp);
	}
}
