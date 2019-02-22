#include "holberton.h"

/**
 * leet - encode a string into 1337
 * @s: string to be encoded.
 *
 * Return: encoded string.
 */

char *leet(char *s)
{
	char letters[5] = {'a', 'e', 'o', 't', 'l'};
	char numbers[5] = {'4', '3', '0', '7', '1'};
	int i;
	int r;

	i = 0;
	while (s[i] != '\0')
	{
		r = 0;
		while (r < 5)
		{
			if (s[i] == letters[r] || s[i] == (letters[r] - 32))
			{
				s[i] = numbers[r];
			}
			r++;
		}
		i++;
	}
	return (s);
}
