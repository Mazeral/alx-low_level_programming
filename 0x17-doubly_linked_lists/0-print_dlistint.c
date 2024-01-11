#include "lists.h"

/**
 * print_dlistint - prints all the elements in the doubly linked list
 * @h: The head of the linked list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;
	const dlistint_t *node = h; 

	while (node != NULL)
	{
		number++;
		printf("%d\n", node->n);
		node = node->next;
	}

	return (number);
}
