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
 * add_nodeint_at_end - adds a new node at the end of a listint_t list.
 * @head: address of pointer to list.
 * @n: integer for new node at the end of list.
 *
 * Return: address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_at_end(listint_t **head, const int n)
{
	listint_t *node, *iterator;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}

	iterator = *head;
	while (iterator->next)
	{
		iterator = iterator->next;
	}
	iterator->next = node;
	return (node);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address to pointer of list.
 * @idx: index where the new node should be inserted.
 * @n: integer node content.
 *
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current, *previous;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
	{
		node->next = NULL;
		node->n = n;
		*head = NULL;
	}

	if (idx == 0)
	{
		node = add_nodeint(head, n);
		return (node);
	}

	node->n = n;

	current = get_nodeint_at_index(*head, idx);
	if (current == NULL)
		return (NULL);

	if (current->next == NULL)
	{
		node = add_nodeint_at_end(head, n);
		return (node);
	}

	previous = get_nodeint_at_index(*head, idx - 1);

	node->next = current;
	previous->next = node;

	return (node);
}
