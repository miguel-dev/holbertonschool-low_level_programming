#include "holberton.h"

/**
 * _strstr - locates a substring.
 * @haystack: main string.
 * @needle: substring to be located in the haystack string.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int h, n;

	if (needle[0] == '\0')
		return (haystack);

	h = 0;
	while (haystack[h] != '\0')
	{
		if (haystack[h] == needle[0])
		{
			n = 0;
			while (needle[n] != '\0')
			{
				if (haystack[h + n] == needle[n])
				{
					n++;
				}
				else
					break;
			}
			if (needle[n] == '\0')
				return (haystack + h);
		}
		h++;
	}
	return (0);
}
