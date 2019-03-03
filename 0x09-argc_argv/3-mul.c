#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the result of multiplication, followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 if successful, 1 otherwise..
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc - 1 == 2)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
