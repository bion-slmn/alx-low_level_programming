#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints an array of intergers
 * @min: starting number of intergers
 * @max: maximum number of intergers
 *
 * Return: and pointer to interger or NULL.
 */
int *array_range(int min, int max)
{
	int i, *ptr, length;

	if (min > max)
		return (NULL);

	length = (max - min);

	ptr = malloc(sizeof(int) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		ptr[i] = min++;

	return (ptr);
}
