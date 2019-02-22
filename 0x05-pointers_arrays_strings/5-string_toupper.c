#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string to be changed.
 *
 * Return: string (s) with letters changed from lowercase to uppercase.
 */

char *string_toupper(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		if (s[index] >= 97 && s[index] <= 122)
		{
			s[index] = s[index] - 32;
		}
		index++;
	}
	return (s);
}
