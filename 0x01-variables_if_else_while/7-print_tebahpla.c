#include <stdio.h>

/**
 * main - printing locase in reverse using putchar
 *
 * return 0 is good
 */
int main(void)
{
	int sol;

	for (sol = 'z'; sol >= 'a'; sol++)
	{
		putchar(sol);
	}

	putchar('\n');

	return (0);
}
