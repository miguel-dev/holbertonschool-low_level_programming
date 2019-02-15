#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	int h;
	int v;

	if (n <= 0)
		_putchar('\n');
	for (h = 1; h <= n; h++)
	{
		for (v = 1; v <= h; v++)
		{
			if (h == v)
			{
				_putchar('\\');
				_putchar('\n');
			}
			if (h != v)
			{
				_putchar(' ');
			}
		}
	}
}
