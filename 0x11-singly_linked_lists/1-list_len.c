#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to a linked list_t list,
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *iterator;
	size_t = 0;

	iterator = h;
	if (!iterator)
		return (0);

	while (iterator)
	{
		n++;
		iterator = iterator->next;
		if (!iterator->next)
		{
			n++;
			break;
		}
	}
	return (n);
}
