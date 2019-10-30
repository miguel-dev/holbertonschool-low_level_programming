#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order.
 * @array: Array to be sorted.
 * @size: Size of array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, min, b;
	int temp;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (b = i + 1; b < size; b++)
		{
			if (array[b] < array[min])
			{
				min = b;
			}
		}
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
