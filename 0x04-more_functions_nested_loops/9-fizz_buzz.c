#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int d;

	for (d = 1; d <= 100; d++)
	{
		if ((d % 5 == 0) && (d % 3 == 0))
			printf("FizzBuzz ");

		else if (d % 5 == 0)
			printf("Buzz ");

		else if
			(d % 3 == 0)
				printf("Fizz ");

		else
			printf("%d ", d);
	}
	printf("\n");

	return (0);
}
