#include "lists.h"
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
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}

	node->n = n;

	iterator = *head;
	while (iterator->next != NULL && c < idx)
	{
		before = iterator;
		iterator = iterator->next;
		c = c + 1;
	}

	if (c + 1 != idx)
	{
		free(node);
		return (NULL);
	}
	else
	{
		before->next = node;
		node->next = iterator;
	}
	return (node);
}
