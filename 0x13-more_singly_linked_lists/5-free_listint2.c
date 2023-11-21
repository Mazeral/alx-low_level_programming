#include "lists.h"

/**
 * free_listint2 - sets all the elements of the linked list to NULL
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
if (*head == NULL)
return;

listint_t *current = *head;
listint_t *next;

while (current != NULL)
{
next = current->next;
free(current);
current = next;
}

*head = NULL;
}
