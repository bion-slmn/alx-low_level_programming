#include <stdio.h>

int main(void)
{
	char bett;
	int mbers;
	long long int mref;
	long int tall;
	float swim;

	printf("Size of char: %zu byte(s)\n", sizeof(bett));
	printf("Size of int: %zu byte(s)\n", sizeof(mbers));
	printf("Size of long int: %zu byte(s)\n", sizeof(tall));
	printf("Size if long long int %zu byte(S)\n", sizeof(mref));
	printf("Size of float: %zu byte(s)\n", sizeof(swim));

	return (0);
}
