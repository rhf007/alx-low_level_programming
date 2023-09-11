#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur;
	unsigned long int i = 0, cnt = 0;

	if (!ht || !ht->array)
	{
		return;
	}

	printf("{");
	while (i < ht->size)
	{
		cur = ht->array[i];
		while (cur)
		{
			if (cnt > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", cur->key, cur->value);
			cnt++;
			cur = cur->next;
		}
		i++;
	}
	printf("}\n");
}
