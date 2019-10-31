#include "sort.h"

/**
 * partition - Last element as pivot and places all smaller elements
 * to the left and larger elements to the right.
 * @array: Array to be ordered.
 * @beginning: Beginning of array.
 * @end: End of array.
 * @size: Size of array.
 *
 * Return: Returns the pivot.
 */
int partition(int *array, int beginning, int end, size_t size)
{
	int i, j, temp, pivot;

	pivot = array[end];
	i = (beginning - 1);

	for (j = beginning; j <= end - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;
	return (i + 1);
}

/**
 * quick_sort2 - Sorts an array of integers using Quicksort.
 * @array: Array to be ordered.
 * @beginning: Beginning of the Array.
 * @end: End of array.
 * @size: Size of array.
 */
void quick_sort2(int *array, int beginning, int end, size_t size)
{
	int pivot;

	if (beginning < end)
	{
		pivot = partition(array, beginning, end, size);

		quick_sort2(array, beginning, pivot - 1, size);
		quick_sort2(array, pivot + 1, end, size);
	}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm.
 * @array: Array to be ordered.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	quick_sort2(array, 0, (size - 1), size);
}
