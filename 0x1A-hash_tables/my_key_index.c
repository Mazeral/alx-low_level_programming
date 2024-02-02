#include "hash_tables.h"
/**
 * key_index - returns the index of a key
 * @key: The key itself
 * @size: The size of the hash function
 * Return: the index
 */

unsigned long int my_key_index(const char *key, unsigned long int size)
{
	unsigned long int hash = my_hash(key);

	return (hash % size);
}
