#include "main.h"

/**
 * get_bit - get  the value of a bit at a given index.
 * @n: is the number to check the bit
 * @index: is the position of the bit in te number
 *
 * Return: the value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int status;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	status  = ((n >> index) & 1);

	return (status);
}
