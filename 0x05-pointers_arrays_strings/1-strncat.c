#include "holberton.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destiny string.
 * @src: source string.
 * @n: maximum number of bytes to be copied from src.
 *
 * Return: pointer to destiny (dest) string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a;
	int c;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}

	c = 0;
	while (c < n && src[c] != '\0')
	{
		dest[a + c] = src[c];
		c++;
	}

	return (dest);
}
