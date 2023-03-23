#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints unlimited number of strings
 * @separator: the separator between strings
 * @n: the number of strings.
 *
 * Return: nothings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	char *str;
	unsigned int i;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (str == NULL)
			printf("%s", "(nil)");

		else
			printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ptr);
}
