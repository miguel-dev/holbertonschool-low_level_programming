#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array.
 * @size: size of each element.
 *
 * Return: pointer to allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);

	a = (char *) malloc(nmemb * size);
	if (a == 0)
	{
		return (0);
	}

	i = 0;
	while (i < size)
	{
		a[i] = '0';
		i++;
	}

	return (a);
}
