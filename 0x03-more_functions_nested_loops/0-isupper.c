#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character to be cheched.
 *
 * Return: 1 is c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
