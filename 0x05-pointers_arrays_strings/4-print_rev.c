#include "main.h"

/**
 * print_rev - prints a string in rev.
 * @s: is the pointer of the string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i -= 1; i >= 0; i--)

		_putchar(s[i]);

	_putchar('\n');
}
