#include <stdio.h>
#include "holberton.h"

/**
 * _strchr - locates a character in a string.
 * @s: string.
 * @c: character to be located.
 *
 * Return: pointer to the first occurrence of character c
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = (s + i);
			break;
		}
		else
		{
			ptr = NULL;
		}
		i++;
	}
	return ptr;
}
