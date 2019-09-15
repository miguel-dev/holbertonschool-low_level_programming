#include "lists.h"

/**
 * sum_dlistint - Returns the sum of the data (n) of a dlistint_t linked list.
 * @head: Address of first element of a list.
 *
 * Return: Sum of all integers in nodes, if list is empty returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
