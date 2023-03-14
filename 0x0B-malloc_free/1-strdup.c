#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to newly allocate string
 * @str: is the sptring passed as parameter
 *
 * Return: a pointer or NULL if fails
 */
char *_strdup(char *str)
{
	int i, len;
	char *str1;

	for (len = 1; str[len] != '\0'; len++)

	str1 = malloc(sizeof(char) * len);

	if (str1 == NULL || str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		str1[i] = str[i];

	str1[i] = '\0';

	return (str1);
}
