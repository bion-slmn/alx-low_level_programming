#include "main.h"

/**
 * _strncpy - copies two strings.
 * @dest: is the destination file.
 * @src: is the source string.
 * @n: is the size being copied.
 * Return: the final copy.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
