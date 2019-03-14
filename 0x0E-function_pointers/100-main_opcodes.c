#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments,
 * @argv: array of arguments.
 *
 * Return: 0 if sucessful.
 */

int main(int argc, char argv[])
{
	int (*p)(int argc, char argv[]);

	p = &main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
