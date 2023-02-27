#include "main.h"
#include <stdio.h>

/**
 * print_array - Print all element of ana array.
 * @a: is the first interger.
 * @n: is the second integer.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
