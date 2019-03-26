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
