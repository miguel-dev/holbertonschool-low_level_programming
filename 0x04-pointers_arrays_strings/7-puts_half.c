#include "holberton.h"

/**
 * puts_half - prints half a string.
 * @str: string.
 */

void puts_half(char *str)
{
	int len;
	int index;
	int n;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		index = n;
		while (str[index] <= len)
		{
			_putchar(str[index]);
			index++;
		}
	}
	else
	{
		index = len / 2;
		while (index <= len)
		{
			_putchar(str[index]);
			index++;
		}
	}
	_putchar('\n');
}
