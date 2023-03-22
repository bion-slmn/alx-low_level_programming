#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: is the array to b searched
 * @size: is the size of array
 * @cmp: function point to compare values
 *
 * Return: an ndex of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);

		if (cmp(array[i]) != 0)
			break;
	}

	return (i);
}
