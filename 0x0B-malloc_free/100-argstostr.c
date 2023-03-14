#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatnates all strings
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: a char pointer or Null
 */
char *argstostr(int ac, char **av)
{
	int arg, byte, i, len = ac;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}
	str[len] = '\0';

	return (str);
}
