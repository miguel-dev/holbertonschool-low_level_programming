#include "holberton.h"

/**
 * puts_half - prints half a string.
 * @str: string.
 */

void puts_half(char *str)
{
	int length;
	int index;
	int n;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
	{
		n = (length - 1) / 2;
		index = length - n;
		while (str[index] <= length)
		{
			_putchar(str[index]);
			index++;
		}
	}
	else
	{
		index = length / 2;
		while (index <= length)
		{
			_putchar(str[index]);
			index++;
		}
	}
	_putchar('\n');
}
