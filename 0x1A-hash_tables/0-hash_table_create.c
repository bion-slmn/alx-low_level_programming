#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table.
 * @size: is the size of the hash table to be created
 *
 * Return: a new hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int j;

	newTable = malloc(sizeof(hash_table_t));

	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!newTable->array || !newTable)
	{
		free(newTable->array);
		free(newTable);
		return (NULL);
	}

	newTable->size = size;

	for (j = 0; j < size; j++)
		newTable->array[j] = NULL;

	return (newTable);
}
