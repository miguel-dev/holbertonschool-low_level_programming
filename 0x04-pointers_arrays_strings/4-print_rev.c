#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed in reverse.
 */

void print_rev(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}
	while (index >= 0)
	{
		_putchar(s[index]);
		index--;
	}
	_putchar('\n');
}
