#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int sol;

	for (sol = 'z'; sol >= 'a'; sol--)
	{
		putchar(sol);
	}

	putchar('\n');

	return (0);
}
