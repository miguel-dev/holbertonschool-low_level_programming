#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: matrix for chessboard.
 *
 */

void print_chessboard(char (*a)[8])
{
	int r, c;

	r = 0;
	while (a[r][0] != '\0')
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[r][c]);
			c++;
		}
		_putchar('\n');
		r++;
	}
}
