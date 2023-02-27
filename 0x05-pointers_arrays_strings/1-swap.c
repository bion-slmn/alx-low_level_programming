#include "main.h"

/**
 * swap_int - swap the values of two intergers.
 * @a: is the first interger
 * @b: is the second interger.
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
