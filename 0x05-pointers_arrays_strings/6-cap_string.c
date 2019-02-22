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
	int word;
	int sep;
	int cap;

	cap = 0;
	while (s[cap] != '\0')
	{
		sep = 0;
		while (sep <= 13)
		{
			if (s[cap] != separators[sep])
			{
				if (s[cap] >= 97 && s[cap] <= 122)
				{
					s[cap] = s[cap] - 32;
				}
			}
			sep++;
		}
		cap++;
	}
	return (s);
}
