#include "lists.h"
/**
 * add_dnodeint_end - adds a node at the end of the doubly linked list.
 * @head: The head
 * @n: The int inside the node
 * Return: the address of the new element, NULL if failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *head;

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (new_node == NULL || current == NULL)
		return (NULL);
	while (current->next != NULL)
	{
		current = current->next;
	}
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
