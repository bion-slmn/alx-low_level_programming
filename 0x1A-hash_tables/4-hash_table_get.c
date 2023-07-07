#include "hash_tables.h"
#include <stddef.h>
#include <string.h>


/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return: value associated with the element,
 *		or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *data;

	index = key_index((const unsigned char *)key, ht->size);

	data = ht->array[index];

	if (data)
	{
		if (!strcmp(data->key, key))
			return (data->value);

		while (data)
		{
			if (!strcmp(data->key, key))
				return (data->value);

			data = data->next;
		}

	}

	return (NULL);
}
