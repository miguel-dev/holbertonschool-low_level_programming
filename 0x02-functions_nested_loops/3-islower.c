#include "holberton.h"

/*
 * _islower - Checks for lowercase character.
 * @c: The character to be checked to see if it's lowercase.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
