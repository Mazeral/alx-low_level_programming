#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: The head of the linked list
 * @idx: The index
 * @n: The int inside the node
 * Return: the address if success, NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t number = 0, i;
	dlistint_t *node = *h, *new_node = malloc(sizeof(dlistint_t));

	if (!(*h) && idx > 0)
		return (NULL);
	new_node->n = n;
	if (!new_node)
		return (NULL);
	while (node != NULL)
	{
		number++;
		node = node->next;
	}
	if (idx > number + 1)
		return (NULL);

	node = *h;
	for (i = 0; i < idx - 1; i++)
		node = node->next;
	new_node->prev = node;
	new_node->next = node->next;
	node->next = new_node;
	new_node->next->prev = new_node;
	return (new_node);
}
