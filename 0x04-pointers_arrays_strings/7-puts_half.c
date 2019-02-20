#include "holberton.h"

/**
 * puts_half - prints half a string.
 * @str: string.
 */

void puts_half(char *str)
{
	int length;
	int n;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 != 0)
		n = (length + 1) / 2;
	else
	{
		n = length / 2;
	}

	while (n < length)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
