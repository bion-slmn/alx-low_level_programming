#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table
 * @key: is the key value of the data
 * @value: is the value part of the datat
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item = create_item(key, value);
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current_node;
	int resolve_collusion;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL || !item)
		return (0);
	current_node = ht->array[index];

	if (!current_node)
	{
		ht->array[index] = item;
		return (1);
	}
	else
	{
		/*updateing the value */
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);
			current_node->value = malloc(strlen(value) + 1);
			if (!current_node->value)
			{
				free_item(current_node);
				return (0);
			}
			strcpy(current_node->value, value);
			free_item(item);
			return (1);
		}
		else
		{
			resolve_collusion = handle_collusion(current_node, item);
			if (resolve_collusion)
				return (1);
			return (0);
		}
	}
}

/**
 * free_item - frees memory for the item
 * @item: is the bucket containg data
 */
void free_item(hash_node_t *item)
{
	free(item->key);
	free(item->value);
	free(item);
}
/**
 * handle_collusion - adds anode to the hash table linked list
 * @head: is the beginning of the list
 * @item: is the item to be added on the list
 *
 * Return: 1 0n sucess and 0 on fail.
 */
int handle_collusion(hash_node_t *head, hash_node_t *item)
{
	hash_node_t *temp = head;

	if (!head)
	{	head = item;
		return (1);
	}

	if (head->next == NULL)
	{
		head->next = item;
		return (2);
	}

	while (temp->next)
		temp =  temp->next;

	temp->next = item;
	return (3);
}

/**
 * create_item - creates an item that can go to the hash table
 * @key: is the key part of the item
 * @value: is the value part of th item
 *
 * Return: an item containing key and value or NULL
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item;

	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (NULL);
	item->key = malloc(sizeof(char) * (strlen(key) + 1));
	if (!item->key)
	{
		free(item);
		return (NULL);
	}

	item->value = malloc(sizeof(char) * (strlen(value) + 1));

	if (!item->value)
	{
		free(item->key);
		free(item);
		return (NULL);
	}

	item->next = NULL;
	strcpy(item->key, key);
	strcpy(item->value, value);

	return (item);
}
