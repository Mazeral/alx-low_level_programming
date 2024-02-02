#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: The key itself
 * @size: The size of the hash function
 * Return: the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	return (hash % size);
}
