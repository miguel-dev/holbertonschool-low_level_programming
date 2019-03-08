#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes of s2 to be concatenated.
 *
 * Return: pointer to new concatenated string. NULL otherwise.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1, len2, con_s1, con_s2;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	len1 = 0;
	while (s1[len1] != 0)
		len1++;

	len2 = 0;
	while (s2[len2] != 0)
		len2++;

	if (n >= len2)
	{
		n = len2;
	}

	s = (char *) malloc((len1 + n) + 1);
	if (s == 0)
		return (0);

	con_s1 = 0;
	while (con_s1 < len1)
	{
		s[con_s1] = s1[con_s1];
		con_s1++;
	}

	con_s2 = 0;
	while (con_s2 < n)
	{
		s[con_s1 + con_s2] = s2[con_s2];
		con_s2++;
	}
	return (s);
}
