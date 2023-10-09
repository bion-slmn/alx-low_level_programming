#include <stdio.h>
#include "search_algos.h"
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
	high = size - 1;
	
	if (array)
	{	
	while(low <= high)
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

	for(index = start; index <= end; index++)
	{
		printf("%s%d", separator, array[index]);
		separator =", ";
	}
	printf("\n");
}
