#include "holberton.h"
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	int asize;
	char *a;
	unsigned int print;

	if (size == 0)
	{
		return (0);
	}
	asize = size - 1;
	a = malloc(asize * sizeof(char));

	print = 0;
	while (print < size)
	{
		a[print] = c;
		print++;
	}

	return a;
}
