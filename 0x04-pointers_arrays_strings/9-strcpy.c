#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: buffer for the string to be copied to.
 * @src: string to be copied.
 *
 * Return: returns the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int index;
	int length;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}

	index = 0;
	while (index <= length)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
