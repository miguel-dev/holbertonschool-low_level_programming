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
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address to pointer of list.
 * @idx: index where the new node should be inserted.
 * @n: integer node content.
 *
 * Return: address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *iterator, *before;
	unsigned int c = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	if (head == NULL || *head == NULL)
		return (NULL);

	if (idx == 0)
	{
		node = add_nodeint(head, n);
		return (node);
	}

	node->n = n;

	iterator = *head;
	while (iterator->next != NULL && c < idx)
	{
		before = iterator;
		iterator = iterator->next;
		c = c + 1;
	}

	if (c + 1 < idx)
	{
		free(node);
		return (NULL);
	}
	else
	{
		node->next = iterator;
		before->next = node;
	}
	return (node);
}
