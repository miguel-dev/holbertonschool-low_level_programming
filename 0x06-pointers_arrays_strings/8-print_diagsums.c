#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to an array of arrays.
 * @size: size of square matrix.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	i = 0;
	while (i < size)
	{
		sum1 += (a[i * (size + 1)]);
		sum2 += (a[(i + 1) * (size - 1)]);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
