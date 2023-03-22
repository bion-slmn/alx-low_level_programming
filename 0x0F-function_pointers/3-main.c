#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - is the entry point.
 * @argc: is the argument count
 * @argv: an array of aarguments
 *
 * Return: an integer.
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *op;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (argc != 4)
	{
		printf("Error");
		exit(98);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && num2 == 0) ||
			(*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc =  get_op_func(argv[2])(num1, num2);

	printf("%d\n", calc);

	return (0);
}
