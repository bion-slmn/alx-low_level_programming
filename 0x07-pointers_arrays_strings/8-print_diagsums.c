#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - is the sum of diagonals.
 * @a: is the name of th matrix
 * @size: is the number of columns in matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0;
	int asum = 0;

	for (i = 0; i  < size; i++)
	{
		sum = sum + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		asum = asum +  a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum, asum);
}
