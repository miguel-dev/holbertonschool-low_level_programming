#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string to be printed between the strings.
 * @n: number of strings.
 * @...: variable arguments.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *string;
	unsigned int i;

	va_start(list, n);

	i = 0;
	while (i < n)
	{
		string = va_arg(list, char*);
		if (string != 0)
		{
			printf("%s", string);
			if (i < n - 1 && separator != 0)
				printf("%s", separator);
		}
		else
			printf("(nil)");
		i++;
	}
	printf("\n");

	va_end(list);
}
