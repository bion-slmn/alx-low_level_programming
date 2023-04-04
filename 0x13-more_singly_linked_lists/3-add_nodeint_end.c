#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint_end - adds node at the end of linked list
 * @head: the value at the head.
 * @n: is the data of the newnode.
 *
 * Return: the address of newnode.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
