#include "lists.h"

/**
 * listint_len - return the number of nodes in the linked list
 * @h: The head of the node
 * Return: i, the number of the nodes
 */
size_t listint_len(const listint_t *h)
{
size_t i = 0;
const listint_t *node;
if (!h)
return (i);

node = h;
while (node)
{
node = node->next;
i++;
}
return (i);
}
