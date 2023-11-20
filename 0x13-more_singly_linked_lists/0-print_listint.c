#include "lists.h"

/**
 * print_listint - print the number of lists
 * @h: The head of the list
 * Return: The number of the nodes
 */

size_t print_listint(const listint_t *h)
{
listint_t **node;
int i = 0;
if (!h)
return (i);

node = &h;
while ((*node)->next)
{
node = (*node)->next;
}
return (i);
}
