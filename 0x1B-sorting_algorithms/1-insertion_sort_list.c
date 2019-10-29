#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *node, *actual, *previous;
	int beginning = 0;
	int beginning2 = 0;

	if (!list || !*list)
		return;

	node = *list;
	while (node)
	{
		node = node->next;
		temp = node->next;
		if (!node->prev)
			return;


		actual = node;
		while (node->n < node->prev->n)
		{
			previous = actual->prev;
			previous->next = actual->next;
			actual->next->prev = previous;
			actual->next = previous;
			actual->prev = previous->prev;
			if (previous->prev)
			{
				previous->prev->next = actual;
				beginning = 1;
			}
			else
			{
				*list = previous;
			}
			previous->prev = actual;
			if (beginning == 0)
			{
				*list = node;
			}
			print_list(*list);
			beginning = 0;
			beginning2 = 1;
		}
		if (beginning2 == 0)
			node = node->next;
		else
		{
			node = temp;
			beginning2 = 0;
		}
	}
}
