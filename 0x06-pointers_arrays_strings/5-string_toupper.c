#include "main.h"
/**
 * string_toupper - convert sting to uppercase
 * @p: is the string converted
 * Return: the converted string.
 */
char *string_toupper(char *p)
{
	int i = 0;

	while (*(p + i) != '\0')
	{
		if (*(p + i) >= 'a' && *(p + i) <= 'z')
		{
			*(p + i) = *(p + i) - 32;
		}
		i++;
	}
	return (p);
}
