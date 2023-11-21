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
listint_t *alt, *new;

if (head == NULL)
return (NULL);
if (idx != 0)
{
alt = *head;
for (i = 0; i < idx - 1 && alt != NULL; i++)
{
alt = alt->next;
}
if (alt == NULL)
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
new->next = alt->next;
alt->next = new;
return (new);
}
