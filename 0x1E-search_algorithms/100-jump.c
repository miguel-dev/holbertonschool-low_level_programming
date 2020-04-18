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
	size_t jump = (size_t) sqrt((double) size);
	size_t index = 0;

	if (array == NULL)
		return (-1);

	while (array[index] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		index += jump;
		if (index >= size)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				index - jump, index);
			printf("Value checked array[%lu] = [%d]\n",
				index - jump, array[index - jump]);
			return (-1);
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n", index - jump, index);
	while (array[index] > value)
	{
		index = index - 1;
		if (array[index] < value)
		{
			return (-1);
		}
	}

	if (array[index] == value)
	{
		return (index);
	}
	else
	{
		return (-1);
	}
}
