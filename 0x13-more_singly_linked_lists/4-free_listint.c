#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the list.
 */
void free_listint(listint_t *head)
{
	listint_t *iterator;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head->next)
	{
		iterator = head->next;
		free(head);
		head = iterator;
	}
	free(head);
}
