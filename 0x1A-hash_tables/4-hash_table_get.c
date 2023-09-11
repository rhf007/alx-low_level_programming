#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to search
 * @key: the key we're looking for
 * Return: value associated with the element, NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur;
	unsigned long int index;

	if (!ht || !key)
	{
		return (NULL);
	}

	index = hash_djb2((const unsigned char *)key) % ht->size;
	cur = ht->array[index];

	while (cur)
	{
		if (strcmp(cur->key, key) == 0)
		{
			return (cur->value);
		}

		cur = cur->next;
	}

	return (NULL);
}
