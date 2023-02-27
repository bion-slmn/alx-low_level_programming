#include "main.h"

/**
 * _strcpy - coipies scr to dest
 * @dest: in the one recieving content.
 * @src: is the one giving content
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i++] = '\0';

	return (dest);
}
