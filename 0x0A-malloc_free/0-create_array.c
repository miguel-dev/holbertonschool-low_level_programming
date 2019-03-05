#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it.
 * @size: size of the array to be created.
 * @c: char to initialize the array.
 *
 * Return: NULL if size is 0. Othwerise returns the pointer to the array,
 * or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	a = malloc(size * sizeof(char));
	if (a == 0)
	{
		return (0);
	}

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	a[size] = 0;

	return (a);
}
