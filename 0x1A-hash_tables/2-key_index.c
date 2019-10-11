#include "hash_tables.h"

/**
 * key_index - Gives index of key.
 * @key: Key
 * @size: Size of storage.
 *
 * Return: Index where the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
