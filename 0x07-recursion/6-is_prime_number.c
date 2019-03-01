#include "holberton.h"

/**
 * is_prime_number2 - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @div: number for n to be divided.
 * @n: input integer.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number2(int div, int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (div < n)
	{
		if (n % div == 0)
		{
			return (0);
		}
		else
			return (is_prime_number2(div + 1, n));
	}
	return (1);
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0.
 * @n: number to be evaluated.
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */

int is_prime_number(int n)
{
	return (is_prime_number2(2, n));
}
