#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 * @min: minumum number of values.
 * @max: maximum number of values.
 *
 * Return: pointer to newly created array. NULL otherwise.
 */

int *array_range(int min, int max)
{
	int *a, size, i;

	if (min > max)
		return (0);

	size = (max - min) + 1;
	a = malloc(size * sizeof(int));
	if (a == 0)
		return (0);

	i = 0;
	while (i < size)
	{
		a[i] = min + i;
		i++;
	}

	return (a);
}
