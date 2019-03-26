#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head
 * to NULL.
 * @head: address of pointer to a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *iterator;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		iterator = *head;
		*head = (*head)->next;
		free(iterator);
	}
}
