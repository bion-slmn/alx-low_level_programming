#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
/*
 * linear_search - this searches for a value linearly
 * @array: this the array to be searched
 * @size: is the size of the array
 * @value: the value to be searched
 *
 * Return: first index where value is located or -1 if absent
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;
	if (array)
	{
	for(index = 0; index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	}
	return (-1);
}
