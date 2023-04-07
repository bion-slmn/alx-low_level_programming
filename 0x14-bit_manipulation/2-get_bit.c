#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: is the number to be manuplated.
 * @index: is the index to be changed
 *
 * Return: value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
