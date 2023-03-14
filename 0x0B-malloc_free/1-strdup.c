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

	for(len = 0; str[len] != '\0'; len++)

	str1 = malloc(sizeof(char) * (len + 1));

	if (str1 == NULL)
		return (NULL);
	else
	{
		for(i = 0; i < len; i++)
			str1[i] = str[i];
	}
	return(str1);
}
