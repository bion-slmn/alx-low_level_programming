#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list, set heat to NULL
 * @head:value of head.
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp1;

	temp = *head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
	*head = NULL;
}
