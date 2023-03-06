#include "main.h"

/**
 * _strpbrk - finds the first character in s that matches in accept.
 * @s: is the string to be scanned.
 * @accept: is the string containing the character to be matched.
 * Return: pointer to the character matched.
 */
char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}

		}
		s++;
	}
	return (0);
}
