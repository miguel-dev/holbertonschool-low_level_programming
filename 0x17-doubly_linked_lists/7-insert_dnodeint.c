#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new new_node at a given position.
 * @h: address to pointer of list.
 * @idx: index where the new new_node should be inserted.
 * @n: integer new_node content.
 *
 * Return: address of new new_node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *old_node, *previous;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (h == NULL)
		return (NULL);

	if (*h == NULL)
	{
		add_dnodeint(h, n);
	}

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	new_node->n = n;

	previous = get_dnodeint_at_index(*h, idx - 1);
	old_node = previous->next;

	previous->next = new_node;
	new_node->next = old_node;

	if (old_node == NULL)
		return (NULL);

	return (new_node);
}
