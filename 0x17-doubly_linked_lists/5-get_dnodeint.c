#include "lists.h"

/**
 * get_dnodeint_at_index - get the value at index
 * @head: is the begining of node
 * @index: is index is the index of the node, starting from 0
 *
 * Return: the value ath that index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	while (i < index)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (NULL);
		i++;
	}
	return (temp);
}
