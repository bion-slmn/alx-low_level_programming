#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @h: The number
 * Return: value of the last digit
 */
int print_last_digit(int h)
{
	int g = (h % 10);

	if (g < 0)
	{
		g = g * -1;
	}
	_putchar(g + '0');
	return (g);
}
