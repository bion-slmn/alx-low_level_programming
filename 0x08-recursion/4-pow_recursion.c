#include "main.h"

/**
 * _pow_recursion - finds the power of x.
 * @x: is the value that has the power.
 * @y: is the power to x.
 * Return: an interger.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if
		(x == 0)
			return (0);
	else
		return (x * _pow_recursion(x, y - 1));
}
