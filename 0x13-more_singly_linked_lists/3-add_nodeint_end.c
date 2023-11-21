#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: The head of the linked list
 * @n: the int in the node
 * Return: NULL if failed, the address if success
 */

void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;

while (*head)
{
current = (*head)->next;
free(*head);
*head = current;
}

*head = NULL;
}
