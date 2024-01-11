#include "lists.h"
/**
 * sum_dlistint - the sum of all the n's in the doubly linked list
 * @head: The head of the linked list
 * Return: the sum, 0 if there's no list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head)
		while (current)
		{
			sum += current->n;
			current = current->next;
		}
	return (sum);
}
