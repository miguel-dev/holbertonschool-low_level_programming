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
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t list.
 * @head: Fist node of list.
 * @index: Position where node will be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous, *node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		node = *head;
		*head = (*head)->next;
		node->next = NULL;
		free(node);
		return (1);
	}

	previous = get_dnodeint_at_index(*head, index - 1);
	if (previous == NULL || previous->next == NULL)
		return (-1);

	node = previous->next;
	previous->next = previous->next->next;
	node->next = NULL;
	free(node);
	return (1);
}
