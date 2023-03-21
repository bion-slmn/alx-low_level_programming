#include "dog.h"
#include <stdlib.h>


/**
 * strlength - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int strlength(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * stcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *stcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog- is new dog varible of struct dog
 * @name: is the name.
 * @age: is the age of the dog
 * @owner: is the owner of dog
 *
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	puppy = malloc(sizeof(dog_t));

	if (puppy == NULL)
		return (NULL);

	puppy->name = malloc(sizeof(char) * strlength(name) + 1);

	if (puppy->name == NULL)
	{
		free(puppy->name);
		free(puppy);

		return (NULL);
	}

	puppy->owner = malloc(sizeof(char) * strlength(owner) + 1);

	if (puppy->owner == NULL)
	{
		free(puppy->owner);
		free(puppy);

		return (NULL);
	}

	puppy->name = stcopy(puppy->name, name);
	puppy->age = age;
	puppy->owner = stcopy(puppy->owner, owner);

	return (puppy);
}
