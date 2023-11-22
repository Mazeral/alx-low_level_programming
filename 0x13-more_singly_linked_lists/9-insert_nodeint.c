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
listint_t *current = malloc(sizeof(listint_t));
listint_t *alt = malloc(sizeof(listint_t));
listint_t *newNode = malloc(sizeof(listint_t));
newNode->n = n;
newNode->next = NULL;
current = *head;
if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}
while (current && index < idx - 1)
{
current = current->next;
index++;
}
if (current == NULL)
return (NULL);

if (!newNode)
return (NULL);

alt = current->next;
current->next = newNode;
newNode->next = alt;
return (newNode);
}
