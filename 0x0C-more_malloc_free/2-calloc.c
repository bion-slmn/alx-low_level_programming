#include "main.h"
#include <stdlib.h>

/**
 * _calloc - assigns memory to an array
 * @nmemb: are the number of members in array
 * @size: is the size of members
 *
 * Return: a void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
