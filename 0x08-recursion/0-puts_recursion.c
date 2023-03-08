#include "main.h"

/**
 * _puts_recursion - print a string using rcursion.
 * @s: is the string parameter.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
