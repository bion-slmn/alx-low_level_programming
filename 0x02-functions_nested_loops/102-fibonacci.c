#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 * separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long num1 = 0, num2 = 1, num3;
	int i;

	for (i = 0; i < 50; ++i)
	{
		num3 = num2 + num1;
		printf("%lu", num3);

		num1 = num2;
		num2 = num3;

		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
