#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node at a given position in the linked list
 * @head: the head of the linked list
 * @idx: The position of the new element
 * @n: The value in the node
 * Return: The address of the node in the linked list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int index = 0;
listint_t *current;
listint_t *alt;
listint_t *newNode;
if (!head)
return (NULL);

newNode->n = n;
current = *head;
while (current && index < idx)
{
if (current->next)
current = current->next;
else
{
return (NULL);
}
index++;
}
if (!newNode)
return (NULL);

alt = current->next;
current->next = newNode;
newNode->next = alt;
return (newNode);
}
