#include <stdio.h>

/**
 * main - prints it's name followed by a new line.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0 always.
 */

int main(int argc __attribute__((unused)), char* argv[])
{
	printf("%s\n", argv[0]);
}
