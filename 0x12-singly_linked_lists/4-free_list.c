#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list
 * @head: list to be freed
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tmpnode = head;

		head = head->next;
		free(tmpnode->str);
		free(tmpnode);
	}
}
