#include "lists.h"

/**
 * free_listint2 - sets all the elements of the linked list to NULL
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
listint_t next = head;
while (head)
{
next = (*head)->next;
(*head)->n = NULL;
(*head)->next = NULL;
head = next;
}
}
