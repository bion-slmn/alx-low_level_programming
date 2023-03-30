#include "lists.h"
#include <stdio.h>

/**
 * beformain- prints before the main:
 * @constructor: executes code before main.
 * Return: nothing
 */
void __attribute__((constructor)) beforemain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
