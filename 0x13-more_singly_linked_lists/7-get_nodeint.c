#include "lists.h"

/**
 * get_nodeint_at_index - returns the index of a node
 * @head: the head of the linked list
 * @index: The index of the node
 * Return: The address of the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
int i = 0;
listint_t *current = head;
if (!head)
return (NULL);

while (current && i < index)
{
current = current->next;
}
return (current);
}
