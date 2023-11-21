#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node from the linked list
 * @head: The head of the linked list
 * @index: The index to find and delete if existed
 * Return: 1 or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *temp, *new;

if (head == NULL)
return (NULL);
if (idx != 0)
{
temp = *head;
for (i = 0; i < idx - 1 && temp != NULL; i++)
{
temp = temp->next;
}
if (temp == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = temp->next;
temp->next = new;
return (new);
}
