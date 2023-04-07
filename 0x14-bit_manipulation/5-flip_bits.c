#include "main.h"

/**
 * flip_bit - calcutalteshe number of bits you would need to flip.
 *		to get from one number to another.
 * @n: to number to be flipped
 * @m: is the number that n will be flipped to.
 *
 * Return: count of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int flip;

	if (n == 0 || m == 0)
		return (0);

	flip = n ^ m;

	while (flip > 0)
	{
		count++;
		flip = flip & (flip - 1);
	}

	return (count);
}
