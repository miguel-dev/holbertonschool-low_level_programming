#include "holberton.h"

/**
 * print_square - prints a square.
 * @size: number indicating the size of it.
 */

void print_square(int size)
{
	int r;
	int c;

	if (size == 0)
		_putchar('\n');
	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
