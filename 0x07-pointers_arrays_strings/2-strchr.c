#include "main.h"

/**
 * _strchr - finds the first occurance of a character.
 * @s: is the string to check
 * @c: is the character to be found.
 * Return: the result if found or NULL- not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
