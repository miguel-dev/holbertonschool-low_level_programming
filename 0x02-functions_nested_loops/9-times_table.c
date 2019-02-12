#include "holberton.h"

/**
 * times_table - prints the nine times table, starting with 0.
 */

void times_table(void)
{
	int f1;
	int f2;
	int p;

	for (f1 = 0; f1 < 10; f1++)
	{
		for (f2 = 0; f2 < 10; f2++)
		{
			p = f1 * f2;
			if (p <= 9 && f2 != 0)
			{
				_putchar(' ');
			}
			else if (f2 > 0)
			{
				_putchar(p / 10 + 48);
			}
				_putchar(p % 10 + 48);
			if (f2 != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
