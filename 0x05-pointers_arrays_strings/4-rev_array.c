#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers.
 * @n: number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int min;
	int max;
	int var;

	max = n - 1;

	min = 0;
	while (min <= max)
	{
		var = a[min];
		a[min] = a[max];
		a[max] = var;
		max--;
		min++;
	}
}
