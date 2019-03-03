#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0, always.
 */

int main(int argc, char *argv[])
{
	int check_number = 1;
	int number = 0;
	int sum = 0;

	while (check_number < argc)
	{
		while (argv[check_number][number] != 0)
		{
			if (isdigit(argv[check_number][number]) > 0)
			{
				number++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		if (isdigit(*argv[check_number]) > 0)
		{
			sum += atoi(argv[check_number]);
			check_number++;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
