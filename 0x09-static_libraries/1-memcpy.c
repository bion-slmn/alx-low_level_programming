#include "main.h"
/**
 * _memcpy - copies src to dest
 * @dest: is the destination block of memory.
 * @src: is the source block of mememory.
 * @n: the bytes to be copied.
 * Return: the destination file.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
