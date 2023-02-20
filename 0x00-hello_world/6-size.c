#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char bett;
	int mbers;
	long long int mref;
	long int tall;
	float swim;

	printf("Size of a char: %lu byte(s)\n", sizeof(bett));
	printf("Size of an int: %lu byte(s)\n", sizeof(mbers));
	printf("Size of a long int: %lu byte(s)\n", sizeof(tall));
	printf("Size of a long long int %lu byte(S)\n", sizeof(mref));
	printf("Size of a float: %lu byte(s)\n", sizeof(swim));
	return (0);
}
