#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to a list.
 *
 * Return: Returns the sum of all the data of a list. If the
 * list is empty it retuns 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head->next != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;

	return (sum);
}
