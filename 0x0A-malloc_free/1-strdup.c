#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - allocates a new space in memory for a copy of a string.
 * @str: string to be duplicated.
 *
 * Return: pointer to a duplicated string.
 */

char *_strdup(char *str)
{
	char *str2;
	int length, str2_size, copy;

	if (str == 0)
		return (0);

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}

	str2_size = length + 1;

	str2 = malloc(str2_size * sizeof(char));

	if (str2 == 0)
		return (0);

	copy = 0;
	while (copy < str2_size)
	{
		str2[copy] = str[copy];
		copy++;
	}

	return (str2);
}
