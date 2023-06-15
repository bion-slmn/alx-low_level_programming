#include "lists.h"
/**
 * insert_dnodeint_at_index - nserts a new node at a given position.
 * @h: is the head pointer
 * @idx: the index of the list where the new node should be added,starts at 0
 * @n: the data of the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *temp2, *temp = *h;
	unsigned int i = 0;

	node = malloc(sizeof(dlistint_t));
	if (!node || !h)
		return (NULL);
	node->n = n;

	if (*h == NULL)
		return (add_dnodeint(h, n));

	while (i < idx - 1)
	{
		temp = temp->next;
		if (temp->next == NULL)
			return (NULL);
		i++;
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	temp2 = temp->next;
	node->next = temp2;
	temp2->prev = node;
	temp->next = node;
	node->prev = temp;

	return (node);
}
