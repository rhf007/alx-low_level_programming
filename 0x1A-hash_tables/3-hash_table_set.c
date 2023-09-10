#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table we're going to operate on
 * @key: key of our node
 * @value: value of our node
 * Return: 1(success), 0(failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *cur;
	unsigned long int index;

	if (!ht || !key || !value)
	{
		return (0);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;
	cur = ht->array[index];

	while(cur)
	{
		if (strcmp(cur->key, key) == 0)
		{
			free(cur->value);
			cur->value = strdup(value);

			if (!cur->value)
			{
				return (0);
			}

			return (1);
		}

		cur = cur->next;
	}

	newnode = malloc(sizeof(hash_node_t));
	
	if (!newnode)
	{
		return (0);
	}

	newnode->key = strdup(key);

	if (!newnode->key)
	{
		free(newnode);
		return (0);
	}

	newnode->value = strdup(value);

	if (!newnode->value)
	{
		free(newnode->key);
		free(newnode);
		return (0);
	}

	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
