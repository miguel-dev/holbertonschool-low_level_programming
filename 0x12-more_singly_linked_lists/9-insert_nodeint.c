#include "lists.h"

/**
 * insert_new_nodeint_at_index - inserts a new new_node at a given position.
 * @head: address to pointer of list.
 * @idx: index where the new new_node should be inserted.
 * @n: integer new_node content.
 *
 * Return: address of new new_node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *old_node, *previous;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
	{
		add_nodeint(head, n);
	}

	if (idx == 0)
	{
		new_node = add_nodeint(head, n);
		return (new_node);
	}

	new_node->n = n;

	previous = get_nodeint_at_index(*head, idx - 1);
	old_node = previous->next;

	previous->next = new_node;
	new_node->next = old_node;

	if (old_node == NULL)
		return (NULL);

	return (new_node);
}
