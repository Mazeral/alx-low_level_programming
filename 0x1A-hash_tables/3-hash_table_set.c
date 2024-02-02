#include "hash_tables.h"
#include <string.h>
#include<stdio.h>

/**
 * hash_table_set - adds elements to the hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((unsigned char*)key, 1024);
	hash_node_t *node = NULL;

	/* If the element doesn't exist, make it and return 1*/
	if (!ht->array[index])
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->key = strdup((char *)key);
		ht->array[index]->value = strdup((char *)value);
		ht->array[index]->next = NULL;
		/* Failure check */
		if (ht->array[index] == NULL)
			return (0);
		return (1);
	}
	while (ht->array[index]->next)
		node = ht->array[index]->next;
	node = malloc(sizeof(hash_node_t));
	node->key = strdup((char *)key);
	node->value = strdup((char *)value);
	node->next = NULL;
	/* Check Failure */
	if (node)
		return (1);
	return (0);

}
