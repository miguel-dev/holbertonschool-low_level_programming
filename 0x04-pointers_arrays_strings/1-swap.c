#include "holberton.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: pointer to an integer.
 * @b: pointer to an integer.
 */

void swap_int(int *a, int *b)
{
	int va;

	va = *a;
	*a = *b;
	*b = va;
}
