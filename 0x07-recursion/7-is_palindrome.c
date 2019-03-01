#include "holberton.h"

/**
 * calculate_length - calculates length.
 * @s: input string.
 *
 * Return: length of string.
 */

int calculate_length(char *s)
{
	if (*s != 0)
	{
		return (1 + calculate_length(s + 1));
	}
	return (0);
}


/**
 * verify_palindrome - moves through the string backwards
 * @s: input string.
 * @f: check position going forwards.
 * @b: check position going backwards.
 *
 * Return: 1 if a string is palindrome, 0 if not.
 */

int verify_palindrome(char *s, int f, int b)
{
	if (f == b)
	{
		return (1);
	}
	else if (s[f] != s[b])
	{
		return (0);
	}
	else if (f <= b)
	{
		return (verify_palindrome(s, f + 1, b - 1));
	}
	else
	{
		return (1);
	}
}


/**
 * is_palindrome - determines if a string is palindrome.
 * @s: input string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length;

	length = calculate_length(s);

	if (*s == 0)
	{
		return (1);
	}
	return (verify_palindrome(s, 0, length - 1));
}
