#include "main.h"
/**
 * _sqrt_recursion - finds the sqaure root recursively
 * @n: is the integer
 * @sq: is the square
 * Return: an integer value
 */
int rt(int n, int sq);

int _sqrt_recursion(int n)
{
	int num = 0;
	int final;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else if (n > 1)
	{
		final = rt(n, num);
		return (final);
	}
	else
		return (0);
}

/**
 * rt - compute the root of num from main
 *
 * @n: number to get its root
 * @sq: root of number num
 *
 * Return: result of computation
 */

int rt(int n, int sq)
{
	if (sq * sq == n)
		return (sq);
	else if (sq == n / 2)
		return (-1);
	else
		return (rt(n, sq + 1));
}
