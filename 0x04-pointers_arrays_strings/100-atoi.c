#include "holberton.h"

/**
 * _atoi - converts a string to an integer.
 * @s: string.
 *
 * Return: integer from the string.
 */

int _atoi(char *s)
{
	int index;
	int integer;
	int length;

	integer = 0;

	index = 0;
	while (s[index] != '\0')
	{
		length++;
	}
	while (index <= (length - 1))
	{
		if (s[index] >= 48 && s[index] <= 57)
		{
			integer = (integer * 10) + s[index];
		}
	}
	return (integer);
}
