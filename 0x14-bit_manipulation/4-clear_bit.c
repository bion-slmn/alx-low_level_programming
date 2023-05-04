#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: is a pointer to the value to be set
 * @index: is the position of the bit to be cleared
 *
 * Return: 1 or -1 if unsucceful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
