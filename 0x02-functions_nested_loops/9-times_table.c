#include "main.h"

/**
 * times_table - print the 9 times table
 */
void times_table(void)
{
	int v, h, mult;

	for (v = 0; v <= 9; v++)
	{
		_putchar('0');

		for (h = 1; h <= 9; h++)
		{
			_putchar(',');
			_putchar(' ');

			mult = v * h;

			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + '0');

			_putchar((mult % 10) + '0');
		}
		_putchar('\n');
	}
}
