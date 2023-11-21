#include "lists.h"

/**
 * free_listint - frees the linked list nodes from the memory
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
listint_t **current1 = &head;
listint_t **current2 = &head;
while ((*current)->next)
{
current1 = head->next;
free(current2->n);
free((current2));
current2 = current1;
}
}