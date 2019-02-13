#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: number to start the list.
 */

void print_to_98(int n)
{
	int i;

	i = n;

	if (n < 99)
	{
		for (; i < 99 && i != 98; i++)
		{
			printf("%i, ", i);
		}
		if (i == 98)
		{
			printf("%i", i);
		}
	}
	else
	{
		if (i > 99)
		{
			for (; i > 98; i--)
			{
				printf("%i, ", n);
			}
			if (i == 98)
			{
				printf("%i", i);
			}
		}
	}
	printf("\n");
}
