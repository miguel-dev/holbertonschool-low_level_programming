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
