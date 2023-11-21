#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: The head of the linked list
 * @n: the int in the node
 * Return: NULL if failed, the address if success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *endNode = malloc(sizeof(listint_t));
listint_t *node;
endNode->n = n;
endNode->next = NULL;

if (endNode == NULL)
return (NULL);
if (!*head)
{
*head = endNode;
return (endNode);
}
node = *head;
while (node->next)
node = node->next;

node->next = endNode;

return (endNode);
}

