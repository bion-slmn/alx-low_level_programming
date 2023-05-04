#include "main.h"

/**
 * flip_bits - calculates the number of bits you would need to flip
 *		to get from one number to another.
 * @n: is number ti be flipped
 * @m: is the number to be flipped too
 *
 * Return: the number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, flipped_no;

	if (n == NULL || m == NULL)
		return (NULL);

	flipped_no = n ^ m;

	while (flipped_no > 0)
	{
		flipped_no &= (flipped_no - 1);
		count++;
	}

	return (count);
}
