#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node from the linked list
 * @head: The head of the linked list
 * @index: The index to find and delete if existed
 * Return: 1 or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp = *head;
unsigned int i;
listint_t *current = *head;
listint_t *prev = NULL;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
for (i = 0; current != NULL && i < index; i++)
{
prev = current;
current = current->next;
}
if (current == NULL)
{
return (-1);
}
prev->next = current->next;
free(current);
return (1);
}
