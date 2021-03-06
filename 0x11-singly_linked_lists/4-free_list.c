#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to head.
 */

void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
	{
		free(head);
		return;
	}

	while (head->next)
	{
		free(head->str);
		next = head->next;
		free(head);
		head = next;
	}
	free(head->str);
	free(head);
}
