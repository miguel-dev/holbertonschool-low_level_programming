#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: array of integers.
 * @n: elements of an array of integers.
 */

void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		if (index != (n - 1))
		{
			printf("%d, ", a[index]);
		}
		else
		{
			printf("%d", a[index]);
		}
		index++;
	}
	printf("\n");
}
