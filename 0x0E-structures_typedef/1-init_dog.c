#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intialilizes dog structure.
 * @d: is the variable dog.
 * @name: is the name of the variable.
 * @age: is the age of the dog.
 * @owner: give the name of the owner.
 *
 * Return: nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
