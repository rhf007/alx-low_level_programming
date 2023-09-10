#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array of the hash table
 * Return: a pointer to the newly created hash table (success), NULL (failure)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newht = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!newht)
	{
		return (NULL);
	}

	newht->size = size;
	newht->array = malloc(sizeof(hash_node_t *) * size);

	if (!newht->array)
	{
		free(newht);
		return (NULL);
	}

	for (i = 0; i < newht->size; i++)
	{
		newht->array[i] = NULL;
	}

	return (newht);
}
