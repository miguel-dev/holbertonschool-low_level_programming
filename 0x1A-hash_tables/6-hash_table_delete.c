#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **array, *node, *target;
	unsigned long int size, i;

	size = ht->size;
	array = ht->array;
	for (i = 0; i < size; i++)
	{
		node = array[i];
		while (node)
		{
			target = node;
			node = node->next;
			free(target->key);
			free(target->value);
			free(target);
		}
	}
	free(array);
	free(ht);
}
