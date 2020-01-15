#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the linear search algorithm.
 * @array: Pointer to an array.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index of array where value is localted. If array is NULL
 * or value is not found it returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
