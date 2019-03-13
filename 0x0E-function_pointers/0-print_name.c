#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name to be printed.
 * @f: pointer to a function, that receives
 * a pointer to a char and returns nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
