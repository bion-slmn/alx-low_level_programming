#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len- counts the number of items(linked list).
 * @h: is pointer to the head
 *
 * Return: count of numbers of list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
