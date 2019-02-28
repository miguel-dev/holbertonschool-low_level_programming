#include "holberton.h"

/**
 * _sqrt_recursion2 - returns the natural square root.
 * @n: number
 * @x: number to be evaluated for natural square root.
 *
 * Return: natural square root, otherwise it returns -1
 */

int _sqrt_recursion2(int x, int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (x * x == n)
	{
		return (x);
	}
	else if (x < n)
		return (_sqrt_recursion2(x + 1, n));
	else
		return (-1);
}


/**
 * _sqrt_recursion - returns the natural square root.
 * @n: number
 *
 * Return: natural square root, otherwise it returns -1.
 */


int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(0, n));
}
