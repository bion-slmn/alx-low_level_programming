#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - searche for a value using interpolation method
 * @array: is the array to be searched
 * @size: is the size of array
 * @value: is the value to be searched in the array
 * Return: the first index where value is located or -1 if not success
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array)
	{
	while (low <= high  && array[low] <= value && array[high] >= value)
	{
		pos = low + (((double)(high - low) / (array[high]
						- array[low])) * (value - array[low]));
		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		else if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	}
	
	pos = low + (((double)(high - low) / (array[high] -
					array[low])) * (value - array[low]));
	printf("Value checked array[%lu] is out of range\n", pos);
	}
	return (-1);
}
