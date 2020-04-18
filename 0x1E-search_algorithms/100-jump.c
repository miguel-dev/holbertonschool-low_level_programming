#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in a sorted array of integers
 * using the jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, otherwise returns -1 if value
 * is not present in the array or if array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t block_size = (size_t) sqrt((double) size);
	size_t beginning = 0;
	size_t end = block_size;
	size_t i;

	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%lu] = [%d]\n", beginning, array[beginning]);
		beginning = end;
		end += block_size;
		if (end > size - 1)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", beginning, end);
			end = size;
		}
	}
	for (i = beginning; i < end; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (i == 0)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", beginning, end);
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		}
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
