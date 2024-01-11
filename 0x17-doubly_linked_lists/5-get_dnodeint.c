#include "lists.h"
/**
 * get_dnodeint_at_index - name is self explaining
 * @head: The head
 * @index: The index of the wanted node
 * Return: The address of the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t i;
	dlistint_t *current = head;

	if (index > 0 && head)
		for (i = 0; i < index; i++)
			current = current->next;	

	return (current);
}
