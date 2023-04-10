#include "main.h"

/**
 * get_endianness - check the endianess
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x = 1;

	char *ptr = (char *) &x;

	if (*ptr)
	{
		return (1);
	}
	else
		return (0);
}
