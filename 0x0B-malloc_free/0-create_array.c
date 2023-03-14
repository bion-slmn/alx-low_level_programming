#include "main.h"
#include <stdlib.h>

/**
 * create_array - createa array of char
 * @c: initializes it with this character
 * @size: are the numberof characters to be created
 *
 * Return: a character or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);

	if (size == 0 || arr == NULL)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			arr[i] = c;
	}

	arr[i] = '\0';
	return (arr);
}
