#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: is a string containing 0 n 1
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0' ; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = result * 2 + (b[i] - '0');
	}
	return (result);
}
