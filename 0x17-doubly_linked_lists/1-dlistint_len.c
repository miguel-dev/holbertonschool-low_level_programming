#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t
 * @h: Address of head of list
 *
 * Return: Number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
