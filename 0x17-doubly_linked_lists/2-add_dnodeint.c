#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: is the begining of list
 * @n: is the value new node to be inserted
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = NULL;
	node->prev = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		(*head)->prev = node;
		*head = node;
	}

	return (*head);
}
