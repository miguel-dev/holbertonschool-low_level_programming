#include "lists.h"

/**
 * add-dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Address of head.
 * @n: Integer that will be contained in the new node.
 *
 * Return: Address of the new element, or NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *aux;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = NULL;
		*head = node;
		return (node);
	}

	aux = *head;
	while (aux->next != NULL)
	{
		aux = aux->next;
	}
	node->prev = aux;
	node->next = NULL;
	aux->next = node;
	return (node);
}
