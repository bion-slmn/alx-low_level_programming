#include "hash_tables.h"

/**
 * key_index - calculates the index of the key_pair
 * @key: is the key of the data
 * @size: is the size of the hash table
 *
 * Return: the index where the data will be placed
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
