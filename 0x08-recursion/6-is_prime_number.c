#include "main.h"

/**
 * is_prime_number- checks if it a prime number
 * @n: is the number to be checked
 * prime - checks the prime number
 * @divide: divede number
 * Return: 1 if n is prime number and 0 if not prime.
 */
int prime(int n, int divide);

int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (prime(n, 2));
}

/**
 * prime - checks the prime number.
 * @n: is the number to be checked.
 * @divide: divdes the number.
 * Return: an interger.
 */
int prime(int n, int divide)
{
	if (divide < n)
	{
		if (n % divide == 0)
			return (0);

		if (divide == n / 2)
			return (1);
	}
	return (prime(n, divide + 1));
}
