#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the begining of node
 * @n: is the value of new node to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *temp;

	node = malloc(sizeof(dlistint_t));
	if (!node || !head)
		return (NULL);

	node->next = NULL;
	node->prev = NULL;
	node->n = n;

	if (*head == NULL)
		*head = node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = node;
		node->prev = temp;
	}

	return (*head);
}
