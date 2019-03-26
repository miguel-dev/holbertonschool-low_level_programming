#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head
 * to NULL.
 * @head: address of pointer to a list.
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
	{
		free(*head);
		head = NULL;
	}

	while ((*head)->next)
	{
		free(*head);
		*head = (*head)->next;
	}
	free(*head);
	head = NULL;
}
