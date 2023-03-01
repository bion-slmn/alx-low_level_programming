#include "main.h"

/**
 * _strncat - appends two strings.
 * @dest: is the first string
 * @src: is the second string
 * @n: is the size of string
 * Return: the pointer of first string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
	{
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
