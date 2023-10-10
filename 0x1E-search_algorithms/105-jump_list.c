#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for avalue using jump search method
 * @list: is a pointer to the head of the list to search in
 * @size: is the size of the array
 * @value: is the value to be found
 * Return:  the first index where value or -1 if not success
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t  step, i, start = 0;
	listint_t *temp = list, *left_pointer;

	if (!temp)
		return (NULL);

	step = 0;

	while (temp->n < value && temp->index < size)
	{
		start = step;
		step += sqrt(size);
		for (i = 0; i < sqrt(size) && temp->next; ++i)
		{
			temp = temp->next;
		}
		printf("Value checked at index[%lu] = [%d]\n", temp->index, temp->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n,", start, step);
	
	left_pointer = list;

	/* move left_pointer to point to index start */
	for(i = 0; i < start; i++)
	{
		left_pointer = left_pointer->next;
	}

	printf("Temp %d\n", left_pointer->n);
	
	while(left_pointer->n < value && left_pointer->n < temp->n)
	{
		if (left_pointer)
		{
		printf("Value checked at [%d] = ...%lu\n", left_pointer->n, left_pointer->next->index);
		if (left_pointer->n == value)
			return (left_pointer);
		if (left_pointer->n > value || left_pointer->n > temp->n)
			break;
		left_pointer = left_pointer->next;
		printf("temp-n, %d\n", left_pointer->n);
		}

	}
	printf("Nothing");
	return (NULL); 
}
