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

	printf("Size of a char: %zu byte(s)\n", sizeof(bett));
	printf("Size of an int: %zu byte(s)\n", sizeof(mbers));
	printf("Size of a long int: %zu byte(s)\n", sizeof(tall));
	printf("Size of a long long int %zu byte(S)\n", sizeof(mref));
	printf("Size of a float: %zu byte(s)\n", sizeof(swim));

	return (0);
}
