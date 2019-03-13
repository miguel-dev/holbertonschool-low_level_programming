/**
 * int_index - searches for an integer.
 * @array: input array.
 * @size: size of the array.
 * @cmp: pointer to a function that checks the array.
 *
 * Return: index of the first element for which the
 * cmp function does't return 0. Otherwise -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (size <= 0)
		return (-1);

	if (array != 0 && cmp != 0)
	{
		s = 0;
		while (s < size)
		{
			if (cmp(array[s]) != 0)
				return (s);
			s++;
		}
	}
	return (-1);
}
