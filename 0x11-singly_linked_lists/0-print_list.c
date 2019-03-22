#include "lists.h"
#include <stdio.h>

/**
 * print_list - write a function that prints all the elements of a
 * list_t list.
 * @h: pointer to list list_t.
 *
 * Return: Number of nodes.
 */
size_t print_list(const list_t *h)
{
	const list_t *iterator;
	int n = 0;

	iterator = h;

	while (iterator)
	{
		n++;
		if (!iterator->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", iterator->len, iterator->str);
		if (iterator->next)
			iterator = iterator->next;
		else
			break;
	}
	return (n);
}
