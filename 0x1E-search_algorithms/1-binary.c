#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array
 * using the binary search algorithm.
 * @array: Pointer to the first element to search.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where value is located. Otherwise, if value
 * is not present in array or array is NULL it returns -1.
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;
	size_t i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i != r)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}

		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
