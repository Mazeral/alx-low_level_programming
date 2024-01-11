#include "lists.h"
/**
 * dlistint_len - gets the length of the doubly linked list
 * @h: The head of the linked list
 * Return: The length
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		node = node->next;
		length++;
	}

	return (length);
}
