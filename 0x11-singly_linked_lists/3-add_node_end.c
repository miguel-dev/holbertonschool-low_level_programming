#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: address of pointer to first element of the list.
 * @str: string to be assigned to new node.
 *
 * Return: address of new element or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *traveler;
	int length;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->str = strdup(str);

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	node->len = length;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	traveler = *head;

	while (traveler->next != NULL)
	{
		traveler = traveler->next;
	}
	traveler->next = node;

	return (*head);
}
