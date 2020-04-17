#include "search_algos.h"
/**
 * linear_search - Checks each element of the array until a match is found
 * or all elements are compared.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value we are searching for.
 *
 * Return: Index where value is located. If the pointer to the array is NULL
 * or value is not present returns -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
