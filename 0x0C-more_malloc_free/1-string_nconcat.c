#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of s2 to s1.
 * @s1: is the destination string
 * @s2: is the source string.
 * @n: number of bytes to be coppied
 *
 * Return: NUll if fail or new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0;
	int i, j;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	s3 = malloc(sizeof(char) * (len + n + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; (s2[j] != '\0' && n--); j++)
	{
		s3[i] = s2[j];
		i++;
	}

	s3[i] = '\0';
	return (s3);
}
