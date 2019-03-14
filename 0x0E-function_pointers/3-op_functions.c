#include "3-calc.h"

/**
 * op_add - returns the sum of a and b.
 * @a: term 1.
 * @b: term 2.
 *
 * Return: a plus b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a minus b.
 * @a: minuend.
 * @b: subtrahend.
 *
 * Return: a minus b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b.
 * @a: factor 1.
 * @b: factor 2.
 *
 * Return: a times b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient ofa and b.
 * @a: dividend.
 * @b: divisor.
 *
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the reminder of the division of a and b.
 * @a: dividend.
 * @b: divisor.
 *
 * Return: remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
