#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: is the string recieving.
 * @src: is the string being added.
 * Return: A pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
