#include <stdio.h>

/**
 * main - is the start of the program.
 * @argc: counts the number of strings
 * @argv: pointer to strings
 * Return: an iteger when finished
 */
int main(int argc, char *argv[])
{
	int i;

	for ( i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
