#include "main.h"

/**
 * puts2 - prints even numbers
 * @str: is the string used
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] % 2 == 0)
			_putchar(str[i]);

	_putchar('\n');
}
