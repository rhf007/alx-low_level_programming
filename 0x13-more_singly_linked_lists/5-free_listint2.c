#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a list
 * @head: pointer to the head itself not the list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp1;

	if (*head == NULL)
	{
		return;
	}

	tmp1 = *head;

	while (tmp1 != NULL)
	{
		listint_t *tmp = tmp1;

		tmp1 = tmp1->next;
		free(tmp);
	}

	*head = NULL;
}
