#include "holberton.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of the triangle.
 */

void print_triangle(int size)
{
	int r;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (r = 1; r <= size; r++)
	{
		for (c = 0; c < size; c++)
		{
			if (c < size - r)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
