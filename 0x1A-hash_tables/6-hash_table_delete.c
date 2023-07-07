#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_delete - deletes the hash table
 * @ht: is the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *node;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		if (!node)
			continue;
		if (node)
		{
			while (node)
			{
				temp = node;
				node = node->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
