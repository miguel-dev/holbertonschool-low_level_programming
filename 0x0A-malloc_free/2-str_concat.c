#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated.
 *
 * Return: pointer to the newly allocated
 * concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1, len2, con_1, con_2, s3_size;

	len1 = 0;
	while (s1[len1] != 0)
	{
		len1++;
	}

	len2 = 0;
	while (s2[len2] != 0)
	{
		len2++;
	}

	s3_size = (len1 + len2) + 1;
	s3 = malloc(s3_size * sizeof(char));

	if (s3 == 0)
	{
		return (0);
	}

	con_1 = 0;
	while (con_1 < len1)
	{
		s3[con_1] = s1[con_1];
		con_1++;
	}

	con_2 = 0;
	while (con_2 < len2 && con_1 < s3_size)
	{
		s3[con_1] = s2[con_2];
		con_1++;
		con_2++;
	}
	s3[s3_size] = 0;
	return (s3);
}
