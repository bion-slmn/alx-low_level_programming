#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	int comma_flag = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (!node)
			continue;
		else
		{
			if (comma_flag == 1)
				printf(", ");

			if (node->next)
			{
				while (node)
				{
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
					if (node)
						printf(", ");
				}
			}
			else
			{
				printf("'%s': '%s'", node->key, node->value);
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
