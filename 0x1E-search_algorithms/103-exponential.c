#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - search for a value in array using exponetial search
 * @array: is the array to be searched
 * @size: is the size of the array
 * @value: is the value to be searched
 * Return: the index where value or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t high, index = 1;
	int result;

	if (array)
	{
		if (array[0] == value)
			return (0);
		/* find the range in which tha value is present */
		while (index < size && array[index] <= value)
		{
			printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		       index *= 2;
		}

		/* the index counld be out of range so use the size of array*/
		high = size - 1 < index ? size - 1 : index;
		printf("Value found between indexes [%lu] and [%lu]\n", index / 2, high);

		/*
		 * do a binary on the sub array, since the sub array will return
		 * of vaule of the sub_ array you have to add index in the main array
		 */
		result = (binary_search(&array[index / 2], high - index / 2, value));

		if (result != -1)
			result += index / 2;

		return (result);
	}

	return (-1);
}

/**
 * binary_search - search for a value in array using binary search
 * @array: is the array to be searched
 * @size: is the size of the array
 * @value: is the value to be searched
 * Return: the index where value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid;

	low = 0;
	high = size;

	if (array)
	{
	while (low <= high)
	{
		printf("Searching in array: ");
		print_array(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
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
