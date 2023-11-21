#include "lists.h"

/**
 * pop_listint - deleted head and returns the data in it
 * @head: The head of the linked list
 * Return: The contents of the node
 */

int pop_listint(listint_t **head)
{
int n = 0;
if (!*head)
return (0);
listint_t *contents;
contents->n = (*head)->n;
contents->next = (*head)->next;
n = (*head)->n;
free(*head);
return (n);
}
