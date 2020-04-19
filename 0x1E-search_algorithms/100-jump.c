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
	size_t jump_step = (size_t) sqrt((double) size);
	size_t prev = 0;
	size_t next = jump_step;
	size_t i;

	if (!array)
		return (-1);

	while (array[next] < value && next < size)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = next;
		next = next + jump_step;
	}

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%lu] and [%lu]\n", prev, next);
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

	if (next > size)
	{
		next = size - 1;
	}	

	for (i = prev; i <= next; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			return (i);
		}
	}
	return (-1);
}
