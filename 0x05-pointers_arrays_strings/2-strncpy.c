#include "holberton.h"

/**
 * _strncpy - copies a string, for n characters.
 * @dest: destiny string.
 * @src: source string.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to the destiny string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	index = 0;
	while (index < n && src[index] != 0)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
