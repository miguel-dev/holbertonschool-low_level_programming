#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: Size of array.
 *
 * Return: Pointer to new hash table, or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h;
	hash_node_t **n;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
	{
		return (h);
	}
	n = malloc(size * sizeof(hash_node_t *));
	if (n == NULL)
	{
		return (NULL);
	}
	h->array = n;
	return (h);
}
