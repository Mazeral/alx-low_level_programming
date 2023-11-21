#include "lists.h"

/**
 * free_listint - frees the linked list nodes from the memory
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
