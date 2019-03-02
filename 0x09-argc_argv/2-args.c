#include <stdio.h>

/**
 * main - prints all the arguments it receives.
 * @argc: number of arguments.
 * @arg: array of arguments.
 *
 * Return: 0 always.
 */

int main(int argc, char *arg[])
{
	int p = 0;

	while (p < argc)
	{
		printf("%s\n", arg[p]);
		p++;
	}
	return (0);
}
