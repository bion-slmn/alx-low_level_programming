#include "main.h"

/**
 * _strstr - check for first occurance of word needle.
 * @haystack: is the string to be scanned.
 * @needle: is the word being searched
 * Return: the pointer of the first occurance.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s1, *s2;

	while (*haystack !=  '\0')
	{

		if (*haystack == *needle)
		{
			s1 = haystack;
			s2 = needle;

			while (*s1 && *s2)
			{
				if (*s1 != *s2)
				{
					break;
				}
			s1++;
			s2++;

			}
			if (*s2 == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
