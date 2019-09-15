#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new new_node at a given position.
 * @head: address to pointer of list.
 * @idx: index where the new new_node should be inserted.
 * @n: integer new_node content.
 *
 * Return: address of new new_node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *iter, *old_node;
	unsigned int node_count;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{	new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	node_count = 0;
	iter = *head;
	while (iter && node_count < idx - 1)
	{	node_count++;
		iter = iter->next;
	}

	if (node_count + 1 < idx)
		return (NULL);

	old_node = iter->next;

	iter->next = new_node;
	new_node->next = old_node;

	return (new_node);
}
