#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t.
 * @head: pointer to a list.
 * @str: string to be added to a new node at the beginning of a list_t.
 *
 * Return: pointer to new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int i;

	node = malloc(sizeof(list_t));
	if (!node)
	{
		free(node);
		return (NULL);
	}

	node->str = strdup(str);

	i = 0;
	while (str[i])
	{
		i++;
	}
	node->len = i;
	node->next = *head;
	*head = node;
	return (node);
}
