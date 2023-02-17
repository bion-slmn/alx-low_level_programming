#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int nm;

	for (nm = 0; nm <= 9; nm++)
		putchar((nm % 10) + '0');

	putchar('\n');

	return (0);
}
