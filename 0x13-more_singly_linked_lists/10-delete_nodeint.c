#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node from the linked list
 * @head: The head of the linked list
 * @index: The index to find and delete if existed
 * Return: 1 or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current = malloc(sizeof(listint_t));
listint_t *alt1 = malloc(sizeof(listint_t));
listint_t *alt2 = malloc(sizeof(listint_t));
unsigned int i = 0;
if (!head)
return (-1);

current = head;
while (current && i < index - 1)
{
current = current->next;
i++;
}
if (!current || i == index || !current->next)
return (-1);

/* current is the element before the node to be deleted. */
/* alt1 is the node which we want to delete. */
/* alt2 is the node that exist if there's a node after alt1. */
alt1 = current->next;
if (alt1->next)
{
alt2 = at1->next;
current->next = alt2;
free(alt1->next);
free(alt1);
}
current->next = NULL;
free(alt1->next);
free(alt1);
}
