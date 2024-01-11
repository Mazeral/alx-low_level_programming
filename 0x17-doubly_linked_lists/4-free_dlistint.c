#include "lists.h"
/**
 * free_dlistint - frees the doubly linked list from memory
 * @head: The head of the linked list
 * Return: Nothing, it's a void function.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
	free(head);
}
