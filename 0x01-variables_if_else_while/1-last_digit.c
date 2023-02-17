#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	n = n % 10;
	/* your code goes there */

	if (n > 5)
	{
		printf("%d and is greater than 5", n);
	}
	else if (n == 0)
	{
		printf("%d and is zero", n);
	}
	else if (n <= 6)
	{
		printf("%d is and is less than 6 and not 0", n);
	}
	return (0);
}
