#include "main.h"

/**
 * jack_bauer - prints every minute of the(24 hours) day
 */
void jack_bauer(void)
{
	int h;
	int m;

	for (h = 00; h <= 23; h++)
	{
		for (m = 00; m <= 59; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
