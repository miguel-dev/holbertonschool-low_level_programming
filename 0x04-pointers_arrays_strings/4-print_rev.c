#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string to be printed in reverse.
 */

void print_rev(char *s)
{
	int len;
	int print;

	len = 0;
	while (s[len] != '\0')
		len++;

	for (print = len; print >= 0; print--)
		_putchar(s[print]);

	_putchar('\n');
}
