#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: is the first string
 * @s2: is the second string.
 * Return: a value after 0 if equal.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}
