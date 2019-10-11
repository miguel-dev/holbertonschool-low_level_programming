#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table we will add or update the key/value.
 * @key: Key.
 * @value: Value associated with the key.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *l, *new_node;

	if (!ht || !key || !value)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = (char *)value;

	index = key_index((const unsigned char *)key, ht->size);
	l = ht->array[index];
	while (l)
	{
		if (l->key == key)
		{
			l->value = (char *)value;
			return (1);
		}
		l = l->next;
	}

	new_node->next = ht->array[index];

	ht->array[index] = new_node;
	return (1);
}
