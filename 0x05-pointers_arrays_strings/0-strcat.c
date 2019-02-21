#include "holberton.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: destiny string.
 * @src: source string.
 *
 * Return: The destiny (dest) string.
 */

char *_strcat(char *dest, char *src)
{
	int a;  /*Indicates where to append src to dest*/
	int c; /*Indicates where to start copying from the src string*/

	a = 0;
	while (dest[a] != '\0')  /*Advance dest to the null byte*/
	{
		a++;
	}

	c = 0;
	while (src[c] != '\0')  /*Write from the src to the dest where a is*/
	{
		dest[a] = src[c];
		a++;
		c++;
	}
	dest[a] = src[c];

	return (dest);
}
