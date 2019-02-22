#include "holberton.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string to be encoded.
 *
 * Return: encoded string.
 */

char *rot13(char *s)
{
	char *input = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char *output = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};
	int index;
	int rot13;

	index = 0;
	while (s[index] != '\0')
	{
		rot13 = 0;
		while (rot13 < 52)
		{
			if (s[index] == input[rot13])
			{
				s[index] = output[rot13];
				break;
			}
			rot13++;
		}
		index++;
	}
	return (s);
}
