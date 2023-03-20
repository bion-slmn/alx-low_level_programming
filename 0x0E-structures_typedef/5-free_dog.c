#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of new dog;
 * @d: varible of new dog
 *
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
