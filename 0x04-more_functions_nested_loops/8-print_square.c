#include "main.h"

/**
 * print_square - draws a square using # on the terminal
 * @size: number of times the width and length to be printed
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)

			_putchar('#');

		_putchar('\n');
	}
	}
	else
		_putchar('\n');
}
