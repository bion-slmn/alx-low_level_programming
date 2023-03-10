#include <stdio.h>
#include <stdlib.h>

/**
 * main - is the start of the program.
 * @argc: counts the number of strings
 * @argv: pointer to strings
 * Return: an iteger when finished
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
