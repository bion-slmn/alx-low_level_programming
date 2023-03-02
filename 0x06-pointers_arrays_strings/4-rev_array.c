#include "main.h"
/**
 * reverse_array - reverses and integer array.
 * @a: is the array.
 * @n: is the size if array.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int *end = a + (n - 1);

	while (a < end)
	{
		temp = *a;
		*a = *end;
		*end = temp;
		a = a + 1;
		end = end - 1;
	}
}
