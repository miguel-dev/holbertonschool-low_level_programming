#include "holberton.h"

/**
 * puts_half - prints half a string.
 * @str: string.
 */

void puts_half(char *str)
{
	int len;
	int index;

	while (str[len] != '\0')
	{
		len++;
	}

	index = len / 2;
	while (index < len)
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
