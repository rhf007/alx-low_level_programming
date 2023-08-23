#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t
 * list
 * @h: list to be printed
 * Return: Number of nodes printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num = 0;

	if (h == NULL || current == NULL)
	{
		return (num);
	}

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		num++;
	}

	return (num);
}
