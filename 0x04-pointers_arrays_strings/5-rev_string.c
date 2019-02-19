#include "holberton.h"

/**
 * rev_string - prints a string, in reverse, followed by a new line.
 * @s: string to be printed in reverse.
 */

void rev_string(char *s)
{
	int max;
	int min;
	int var;

	max = 0;
	while (s[max] != '\0')
	{
		max++;
	}

	max--;

	for (min = 0; min <= max; min++)
	{
		var = s[min];
		s[min] = s[max];
		s[max] = var;
		max--;
	}
}
