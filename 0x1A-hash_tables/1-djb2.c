#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 hash function
 * @str: The value
 * Return: The key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = hash * 33 + c;

	return (hash);
}
