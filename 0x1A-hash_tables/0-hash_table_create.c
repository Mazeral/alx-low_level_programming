#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: The size of the hash table array
 * Return: Either error or the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/* if success: return the pointer, else return NULL */
	hash_table_t *hash_t = malloc(sizeof(hash_table_t) * size);

	if (hash_t)
		return (hash_t);

	free(hash_t);
	return (NULL);
}
