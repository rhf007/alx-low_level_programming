#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur;
	unsigned long int i = 0;

	if (!ht || !ht->array || ht->size == 0)
	{
		return;
	}

	while (i < ht->size)
	{
		while (ht->array[i])
		{
			cur = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = cur;
		}

		i++;
	}

	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
