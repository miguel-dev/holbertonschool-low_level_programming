#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and initializes it.
 * @size: size of the array to be created.
 * @c: char to initialize the array.
 *
 * Return: NULL if size is 0. Othwerise returns the pointer to the array,
 * or NULL if it fails..
 */

char *create_array(unsigned int size, char c)
{
	int asize;
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	asize = size - 1;
	a = malloc(asize * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}

	return (a);
}
