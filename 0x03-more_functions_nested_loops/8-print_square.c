#include "holberton.h"

/**
 * print_square - prints a square.
 * @size: number indicating the size of it.
 */

void print_square(int size)
{
	int r;
	int c;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
