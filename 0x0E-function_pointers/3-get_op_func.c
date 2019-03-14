#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to perform the operation
 * asked by the user.
 * @a: number 1 to be operated.
 * @b: number 2 to be operated.
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
	while (i < ops[i].op != 0)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	return (0);
}
