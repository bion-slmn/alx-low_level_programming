#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocated memory
 * @ptr: is the pointer to previous allocated with malloc.
 * @old_size: is size in bytes of ptr.
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to new memory or NULL if fails.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptr1, *ptrnew;

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	ptrnew = malloc(new_size);
	ptr1 = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptrnew[i] = ptr1[1];
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptrnew[i] = ptr1[1];
	}

	free(ptr);

	return (ptrnew);
}
