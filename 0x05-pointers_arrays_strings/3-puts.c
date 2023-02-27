#include "main.h"

/**
 * _puts - print a string to the stdout
 * @str: is the pointer of the string.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0';)
		_putchar(*str++);

	_putchar('\n');
}
