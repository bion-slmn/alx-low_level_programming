#include "lists.h"

/**
 * delete_dnodeint_at_index -  deletes node at index index of a linked list.
 * @head: is the head pointer
 * @index: is the index to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp2, *temp = *head;

	if (!head || !temp)
		return (-1);
	if (index == 0 && temp->next != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
		return (1);
	}
	if (index == 0 && temp->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	while (index != 1)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (-1);
		index--;
	}
	if (temp->next == NULL)
	{
		temp2 = temp->prev;
		temp2->next = NULL;
		free(temp);
		return (1);
	}
	temp2 = temp->next;
	temp->next = temp2->next;
	temp2->prev = temp;
	free(temp2);
	return (1);
}
