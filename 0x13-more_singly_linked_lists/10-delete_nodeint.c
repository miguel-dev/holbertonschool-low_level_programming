#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to list.
 * @index: number of node to be returned.
 *
 * Return: node indicated by index or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head->next != NULL && c < index)
	{
		c++;
		head = head->next;
	}

	if (c < index)
	{
		return (NULL);
	}
	return (head);
}

/**
 * delete_nodeint_at_index - Deletes the node at index of a listint_t list.
 * @head: Fist node of list.
 * @index: Position where node will be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous, *node;

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

	previous = get_nodeint_at_index(*head, index - 1);
	if (previous == NULL || previous->next == NULL)
		return (-1);

	node = previous->next;
	previous->next = previous->next->next;
	node->next = NULL;
	free(node);
	return (1);
}
