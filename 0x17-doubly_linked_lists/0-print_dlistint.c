#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: Address of head of list.
 *
 * Return: Number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%i\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
