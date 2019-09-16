#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}
	printf("%i\n", h->n);
	n++;

	return (n);
}
