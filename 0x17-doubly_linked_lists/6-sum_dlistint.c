#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: is the pointer to the begining of the list
 *
 * Return: returns the sum of all the data (n), 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (!head)
		return (0);
	if (head->next == NULL)
		return (head->n);

	while (temp->next != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	sum = sum + temp->n;
	return (sum);
}
