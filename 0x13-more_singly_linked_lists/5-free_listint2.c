#include "lists.h"

/**
 * free_listint2 - sets all the elements of the linked list to NULL
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
listint_t **next = head;
listint_t **extra = head;
next = (*head)->next;
(*head)->n = NULL;
(*head)->next = NULL;
while (next)
{
extra = (*next)->next;
free(next->n);
free(next->next);
free(next);
next = extra;
}
}
