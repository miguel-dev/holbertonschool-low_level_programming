#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid.
 * @grid: two dimensional grid.
 * @height: height of the bidimensional matrix.
 */

void free_grid(int **grid, int height)
{
	int f;

	if (grid == 0)
		return;

	for (f = 0; f < height; f++)
	{
		free(grid[f]);
	}
	free(grid);
}
