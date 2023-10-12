#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for avalue using jump search method
 * @array: is the array to be searched
 * @size: is the size of the array
 * @value: is the value to be found
 * Return:  the first index where value or -1 if not success
 */
int jump_search(int *array, size_t size, int value)
{
	size_t  step, index, start = 0;

	step = 0;
	if (array)
	{
	while (array[step] < value && step < size)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		start = step;
		step += sqrt(size);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, step);

	for (index = start; index < step && index < size; index++)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	}
	return (-1);
}
