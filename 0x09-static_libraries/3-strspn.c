#include "main.h"

/**
 * _strspn - it give the length on a substring in main string
 * @s: is the main string.
 * @accept: is the substring.
 * Return: accepts unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				n++;
			break;
			}
			else if (accept[j + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
