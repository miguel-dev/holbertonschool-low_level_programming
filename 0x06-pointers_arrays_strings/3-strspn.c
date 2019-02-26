#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: main string.
 * @accept: string to be compared against.
 *
 * Return: number of consecutive bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;
	int i, j;

	n = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			else
			{
				j++;
			}
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (n);
}
