#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - retorns a pointer to a matrix of integers..
 * @width: 1 dimension of the matrix.
 * @height: 2 dimension of the matrix.
 *
 * Return: pointer to a two dimensional array of integers. NULL otherwise.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int r, c, f;

	if (width <= 0 || height <= 0)
		return (0);

	a = (int **)malloc(height * sizeof(int *));
	if (a == 0)
	{
		free(a);
		return (0);
	}

	r = 0;
	while (r < height)
	{
		c = 0;
		a[r] = malloc(width * sizeof(int));

		if (a[r] == 0)
		{
			for (f = 0; f <= r; f++)
				free(a[f]);
			free(a);
			return (0);
		}

		while (c < height)
		{
			a[r][c] = 0;
			c++;
		}
		r++;
	}
	return (a);
}
