#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: number to be examined for last digit.
 *
 * Return: last digit.
 */

int print_last_digit(int n)
{
	int d;

	d = n % 10;
	if (n >= 0)
	{
		_putchar(d + 48);
		return (d);
	}
	if (n < 0)
	{
		_putchar(-d + 48);
		return (-d);
	}
	return (0);
}
