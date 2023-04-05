#include "lists.h"

/**
 * find_listint_loop -  finds the loop in a linked list.
 * @head: pointer to the begining of linked list
 *
 * Return: address of node where loop starts, or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;
	
	if (head == NULL || head->next == NULL)
		return (NULL);

	fast = head;
	slow = head;

	while (fast != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow =  head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				return (slow);
			}
		}
	}
	return (NULL);
}
