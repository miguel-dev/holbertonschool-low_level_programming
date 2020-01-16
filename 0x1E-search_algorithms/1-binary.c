#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * of integers using the binary search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value we are searching for.
 *
 * Return: Index where value is located. -1 if array is NULL
 * or value is nor present in the array.
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int r = size - 1;
	int i;

	while (l <= r)
	{
		int middle = l + (r - l) / 2;

		printf("Search in array: ");

		for (i = l;  i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
		{
			l = middle + 1;
		}

		else
			r = middle - 1;
	}
	return (-1);
}
