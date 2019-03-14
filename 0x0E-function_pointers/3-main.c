#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple arithmetic operators.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 if sucessful.
 */

int main(int argc, char *argv[])
{
	int term1, term2;
	char *operator;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operator = argv[2];

	if (operator == 0)
	{
		printf("Error\n");
		exit(99);
	}

	term1 = atoi(argv[1]);
	term2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}

	operation = &(get_op_func(operator)(term1, term2));
	printf("%d", operation(term1, term2));
}
