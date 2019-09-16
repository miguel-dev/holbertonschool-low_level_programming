#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Head of list.
 * @index: Index where node is located.
 *
 * Return: Node at index in list, otherwise return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;

	if (head == NULL)
		return (NULL);

	while (head && node_count < index)
	{
		node_count++;
		head = head->next;
	}

	if (node_count < index)
		return (NULL);

	return (head);
}

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
	if (previous == NULL)
		return (NULL);

	old_node = previous->next;
	previous->next = new_node;
	new_node->prev = previous;
	new_node->next = old_node;
	old_node->prev = new_node;

	if (old_node == NULL)
		return (NULL);

	return (new_node);
}
