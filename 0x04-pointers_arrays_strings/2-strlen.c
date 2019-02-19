#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: string of characters.
 *
 * Return: Integer indicating the lenght of a string.
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;

	return (len);
}
