#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node at thn beginnig of list
 * @head: head pointer
 * @str:  is the string data to be added
 *
 * Return: pointer to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (0);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlength(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * strlength - gives the length of string
 * @str: is the string
 * Return: count of length
 */
int strlength(const char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
