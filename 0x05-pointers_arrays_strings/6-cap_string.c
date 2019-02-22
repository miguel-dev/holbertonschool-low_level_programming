#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to capitalize.
 *
 * Return: capitalized string.
 */

char *cap_string(char *s)
{
	char separators[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};
	int index;
	int sep;

	index = 0;
	while (s[index] != '\0')
	{
		sep = 0;
		while (sep <= 13)
		{
			if (s[index] == separators[sep])
			{
				if (s[index + 1] >= 97 && s[index + 1] <= 122)
				{
					s[index + 1] = s[index + 1] - 32;
					break;
				}
			}
			sep++;
		}
		index++;
	}
	return (s);
}
