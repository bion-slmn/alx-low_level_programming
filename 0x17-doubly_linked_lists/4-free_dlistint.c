#include "lists.h"

/**
 * free_dlistint - free dlistint list
 * @head: is the begining of list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp->next != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	free(temp);
}
