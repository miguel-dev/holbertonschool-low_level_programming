#include "holberton.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string containing binary number.
 *
 * Return: converted number or 0 if there is one or more chars in the
 * string b that is not 0 or 1.
 */
unsigned int binary_to_uint(const char *b)
{
	int length, i;
	unsigned int number = 0;

	if (b == NULL)
		return (0);

	length = 0;
	while (b[length] != '\0')   /*Go to the end of the string.*/
		length++;

	i = 0;
	while (b[i] != '\0')  /*Apply algorithm from the end of the binary number.*/
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		number = number * 2 + (b[i] - 48);

		i++;
	}
	return (number);
}
