#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	int i,j,mult;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			if (n > 15 || n < 0)
			{
			   	break;
			}

			_putchar(',');
			_putchar(' ');
			mult = i * j;
			
			if (mult <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((mult \ 10) + '0');
			}
			_putchar((mult % 10) + '0');
		}
	}
}	
