#include "lists.h"
/**
 * add_dnodeint - adds a node at the beginning of the doubly linked list
 * @head: The head of the doubly linked list
 * @n: The int inside the new node
 * Return: The address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (!new_node)
		return (NULL);
	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	if (*head == NULL)
		return (NULL);
	return (*head);
}
