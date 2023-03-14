#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: is the destination string
 * @s2: is the source string
 *
 * Return: pointer of newly allocated space in memory or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len3, len2 = 0;
	int i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (j = 0; s2[j] != '\0'; j++)
		len2++;

	len3 = len2 + len1;

	concat = malloc(sizeof(char) * (len3 + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		concat[i] = s2[j];
		i++;
	}

	concat[i] = '\0';

	return (concat);
}
