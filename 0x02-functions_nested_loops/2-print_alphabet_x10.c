#include "holberton.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 */

void print_alphabet_x10(void)
{
	char a;
	int t;

	for (t = 0; t < 10; t++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
