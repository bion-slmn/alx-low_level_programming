#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - adds the value of all data(n).
 * @head: is the pointer to the first node.
 *
 * Return: the sum of the  data.
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	if (head == NULL)
		return (0);

	ptr = head;

	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
