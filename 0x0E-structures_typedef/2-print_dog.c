#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the details of dog
 * @d: is the structure variable.
 *
 * Returns: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->name = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
