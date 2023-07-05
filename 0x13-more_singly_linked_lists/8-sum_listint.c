#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all data of a linked list
 * @head: list head/pointer
 * Return: sum of all data of a linked list, 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
