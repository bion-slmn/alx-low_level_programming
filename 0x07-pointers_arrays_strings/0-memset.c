#include "main.h"
/**
 * _memset - fills a block of memery with a char b.
 * @s: is the string to be filled with b.
 * @b: will be filled in the string.
 * @n: are the blocks to be filed.
 * Return: a pointer after filling.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
