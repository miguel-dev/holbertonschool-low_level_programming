#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints float.
 * @format: list of types of arguments passed to the function.
 * @...: parameters.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *string;
	int i, f;

	va_start(list, format);
	i = 0;
	while (format[i] && format)
	{
		f = 1;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				string = va_arg(list, char*);
				if (!string)
				{
					printf("%p", string);
					break;
				}
				printf("%s", string);
				break;
			default:
				f = 0;
		}
		if (format[i + 1] != '\0' && f != 0)
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(list);
}
