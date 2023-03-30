#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_list - frees memory allocated in linked list
 * @head: is the address held by head
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *newptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		newptr = head->next;
		free(head->str);
		free(head);
		head = newptr;
	}
}
