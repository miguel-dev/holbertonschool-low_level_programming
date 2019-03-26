#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node's data (n).
 * @head: address of pointer to list.
 *
 * Return: if the list is empty it returns 0, otherwise the head's node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *iterator;
	int data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	while (*head != NULL)
	{
		data = (*head)->n;
		iterator = *head;
		*head = (*head)->next;
		free(iterator);
	}
	return (data);
}
