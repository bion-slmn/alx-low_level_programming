#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds unlimited number of variables
 * @n: is the last fixed argument
 *
 * Return: an integer or null
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	return (sum);
}
