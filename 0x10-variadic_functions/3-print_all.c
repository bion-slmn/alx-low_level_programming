#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints everything
 * @format:  is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list ptr;
	int j = 0;
	char *str;

	va_start(ptr, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[j])
	{
		switch (format[j])
		{
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'c':
				printf("%c", (char) va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(ptr, double));
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f' ||
					format[j] == 's') && format[(j + 1)] != '\0')
			printf(", ");
		++j;
	}
	printf("\n");
	va_end(ptr);
}
