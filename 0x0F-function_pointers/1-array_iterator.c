#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function and array elements
 * @array: is the array name
 * @size: is the size of array
 * @action: pointer function that accepts integer
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
