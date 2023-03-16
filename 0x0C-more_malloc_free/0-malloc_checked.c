#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: is the digit to be allocated.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{

	void *c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}

