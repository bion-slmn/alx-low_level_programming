#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint -  deletes the head node
 * @head: is the value of head.
 *
 * Return:  the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int  n;

	ptr = *head;
	n = (*head)->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(ptr);

	return (n);
}
