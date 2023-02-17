#include <stdio.h>
/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int b;
	char s;

	for (b = 0; b <= 9; b++)
	{
		putchar((b % 10) + '0');
	}
	for (s = 'a'; s <= 'f'; s++)
	{
		putchar(s);
	}
	putchar('\n');

	return (0);
}
