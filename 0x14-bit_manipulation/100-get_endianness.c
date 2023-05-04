#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: an interger:
 */
int get_endianness(void)
{
	int i = 1;

	char *c = (char *)&i;

	return (*c);
}
