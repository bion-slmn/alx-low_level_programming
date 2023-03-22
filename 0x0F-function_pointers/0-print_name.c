#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name that is passed
 * @name: is the name passed
 * @f: is a function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
