#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * asked by the user.
 * @s: operation selected by the user.
 *
 * Return: pointer to a function that corresponds to the operator given
 * as a parameter.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != 0)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	return (0);
}
