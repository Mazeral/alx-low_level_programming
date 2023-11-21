#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: The head of the linked list
 * @n: the int in the node
 * Return: NULL if failed, the address if success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current = *head;
new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (current->next)
current = current->next;

current->next = new;

return (new);
}
