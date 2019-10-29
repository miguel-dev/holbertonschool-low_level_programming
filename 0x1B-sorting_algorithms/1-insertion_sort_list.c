#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: double pointer for the head of double linked list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *temp, *actual, *previous;
	int beginning = 0, flag = 0;

	if (!list || !*list)
		return;
	node = *list;
	node = node->next;
	while (node)
	{
		temp = node->next;
		actual = node;
		while (node->prev != NULL && node->n < node->prev->n)
		{
			previous = actual->prev;
			previous->next = actual->next;
			if (actual->next != NULL)
				actual->next->prev = previous;
			actual->next = previous;
			actual->prev = previous->prev;
			if (previous->prev)
			{
				previous->prev->next = actual;
				beginning = 1;
			}
			previous->prev = actual;
			if (beginning == 0)
				*list = node;
			print_list(*list);
			beginning = 0;
			flag = 1;
		}
		if (flag == 0)
			node = node->next;
		else
			node = temp;
	}
}
