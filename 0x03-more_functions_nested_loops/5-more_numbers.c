#include "holberton.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14.
 */

void more_numbers(void)
{
	int t;
	int n;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
			{
				_putchar(n / 10 + '0');
			}
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
