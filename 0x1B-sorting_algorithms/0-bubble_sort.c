#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using the bubble
 * sort algorithm.
 * @array: Array of integers.
 * @size: Size of array.
 */
void bubble_sort(int *array, size_t size)
{
	int unordered = 1;
	size_t i = 0;
	int temp;

	while (unordered && array)
	{
		unordered = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i] < array[i - 1])  /*If it's decrementing*/
			{
				temp = array[i];
				array[i] = array[i - 1];
				array[i - 1] = temp;
				print_array(array, size);
				unordered = 1;
			}
		}
	}
}
