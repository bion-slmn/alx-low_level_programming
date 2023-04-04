#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - checks data at nth node.
 * @head: is the begining of the node.
 * @index: is the position node;
 *
 * Return: the data at that position.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
