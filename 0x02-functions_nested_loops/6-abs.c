#include "holberton.h"

/**
 * _abs - calculates the absolute value of an integer.
 * @i: integer to be calculated.
 *
 * Return: Value of the integer.
 */

int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else
	{
		return (-i);
	}
}
