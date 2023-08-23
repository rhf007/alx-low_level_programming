#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t linked
 * list.
 * @head: the list
 * Return: sum (success), 0 (failure)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL || current == NULL)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
