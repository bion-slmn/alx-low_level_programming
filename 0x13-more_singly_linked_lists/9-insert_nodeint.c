#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts an node at a give index.
 * @head: is the value at the head.
 * @idx: the index of the list where the new node should be added
 * @n: the data(n) of the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *ptr;
	unsigned int i;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		return (NULL);

	ptr = *head;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	else
	{
	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newnode->next = ptr->next;
			ptr->next = newnode;
			return (newnode);
		}
		else
		ptr = ptr->next;
	}
	}
	return (NULL);
}
