#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of arguments.
 * @...: arguments.
 *
 * Return: sum of parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int sum, i;

	if (n == 0)
		return (0);

	va_start(list, n);

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(list, int);
		i++;
	}

	va_end(list);

	return (sum);
}
