#include "lists.h"

/**
 * dlistint_len - counts number of elements in a linked dlistint_t list.
 * @h: is the head of lists
 *
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 1;

	if (h == NULL)
		return  (0);
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
