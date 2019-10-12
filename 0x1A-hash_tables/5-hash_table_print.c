#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array, *n;
	unsigned long int size;
	unsigned long int i;
	int a = 0;

	if (!ht)
		return;

	size = ht->size;
	array = ht->array;

	printf("{");
	for (i = 0; i < size; i++)
	{
		n = array[i];
		while (n)
		{
			if (a == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", n->key, n->value);
			n = n->next;
			a = 1;
		}
	}
	printf("}\n");
}
