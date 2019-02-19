#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: string.
 */

void puts2(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		if (index % 2 == 0)
		{
			_putchar(str[index]);
		}
		index++;
	}
	_putchar('\n');
}
