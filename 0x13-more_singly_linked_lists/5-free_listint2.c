#include "lists.h"

/**
 * free_listint2 - sets all the elements of the linked list to NULL
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;
if (head)
{
while (*head != 0)
{
tmp = *head;
*head = tmp->next;
free(tmp);
}
}
