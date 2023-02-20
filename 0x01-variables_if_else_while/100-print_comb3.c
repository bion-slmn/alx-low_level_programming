#include <stdio.h>

/**
 * main - Print all posible combinations,
 *	  of two different  digits in orders.
 *
 * Return - Always 0.
 */
int main(void)
{
	int num1, num2;

	for (num1 = 1; num1 < 9; num1++)
	{
		for (num2 = num2 + 1; num2 < 10; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
