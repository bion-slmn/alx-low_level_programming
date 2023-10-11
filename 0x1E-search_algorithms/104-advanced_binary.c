#include <stdio.h>
#include "search_algos.h"
/**
 * advanced_binary - search for the first occurance of a value
 * @array: the array to be searched
 * @size: is the size of the array
 * @value: is the value to be searched
 * Return: the index where value or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	low = 0;

	if (array)
	{
		high = size - 1;
		return (first_occur(array, low, high, value, size));
	}
	return (-1);
}

/**
 * first_occur - find the first occurance of a value using binary
 * @low: the begining index of sub array
 * @high: the last index of sub array
 * @value: is the value to be searched
 * @size: the size of array/sub array
 * @array: the array to be searched
 * Return:an int
 */
int first_occur(int *array, size_t low, size_t high, int value, size_t size)
{
	size_t mid;

	if (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (mid == 0)
			return (mid);

		if ((value > array[mid - 1]) && array[mid] == value)
			return (mid);

		if (array[mid] == value)
			high = mid;
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;

		return (first_occur(array, low, high, value, size));
	}

	return (-1);
}

/**
 * print_array- prints the array
 * @array : array to be print
 * @start: where to start printing
 * @end: last value to print
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t index;
	char *separator = "";

	for (index = start; index <= end; index++)
	{
		printf("%s%d", separator, array[index]);
		separator = ", ";
	}
	printf("\n");
}
