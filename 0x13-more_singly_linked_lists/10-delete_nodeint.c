#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index -  deletes node at given index.
 * @head: is the value of the head.
 * @index: is the index of the node.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newptr, *oldptr;
	unsigned int i;

	newptr =  *head;
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(newptr);
		return (1);
	}

	else
	{
	for (i = 0; i < index; i++)
	{
		oldptr = newptr;
		newptr = newptr->next;
	}

	if (oldptr == NULL || oldptr->next == NULL)
		return (-1);

	oldptr->next = newptr->next;

	free(newptr);
	return (1);
	}
}
