#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - is the start of the program.
 * @argc: counts the number of strings
 * @argv: pointer to strings
 * Return: an iteger when finished
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
		printf("0\n");

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}

	printf("%d\n", add);
	}

	return (0);
}
