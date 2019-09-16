#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer holding the address of the pointer to the list.
 * @n: integer of the new node.
 *
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}

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
 * insert_nodeint_at_index - inserts a new new_node at a given position.
 * @head: address to pointer of list.
 * @idx: index where the new new_node should be inserted.
 * @n: integer new_node content.
 *
 * Return: address of new new_node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *old_node, *previous;

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
	{	new_node = add_nodeint(head, n);
		return (new_node);
	}

	previous = get_nodeint_at_index(*head, idx - 1);
	if (previous == NULL)
		return (NULL);

	old_node = previous->next;
	previous->next = new_node;
	new_node->next = old_node;

	previous->next = new_node;
	new_node->next = old_node;

	return (new_node);
}
