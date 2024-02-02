#include "hash_tables.h"

/**
 * my_hash - implementing the djb2 hash function
 * @str: The value
 * Return: The key
 */
unsigned long int my_hash(const char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = hash * 33 + c;

	return (hash);
}
