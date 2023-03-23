#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints the numbers
 * @separator: the separator of numbers
 * @n: is number of numbers to be printed
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;

	unsigned int i;

	va_start(ptr, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);

	printf("\n");
}
