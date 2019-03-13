#include "holberton.h"

/**
 * print_times_table - prints the n times table,
 * starting with 0.
 * @n: number for the table.
 */

void print_times_table(int n)
{
	int r, c, product;

	if (n > 15 || n < 0)
		return;

	product = 1;
	r = 0;
	while (r <= n)
	{
		c = 0;
		while (c <= n)
		{
			product = r * c;
			if (r * c < 10)
			{
				_putchar(product + 48);
			}
			else if (r * c < 100)
			{
				_putchar(product / 10 + 48);
				_putchar(product % 10 + 48);
			}
			else
			{
				_putchar(product / 100 + 48);
				_putchar((product / 10) % 10 + 48);
				_putchar(product % 10 + 48);
			}


			if (c != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			c++;
		}
		_putchar('\n');
		r++;
	}
}
