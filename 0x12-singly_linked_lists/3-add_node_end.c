#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a node at the end (linked lists)
 * @head: is the pointer to the head(**head)
 * @str: is the sting passed
 *
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	if (str == NULL)
		return (0);

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlength(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
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
