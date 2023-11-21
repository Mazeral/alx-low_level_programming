#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print the number of lists
 * @h: The head of the list
 * Return: The number of the nodes
 */

size_t print_listint(const listint_t *h)
{
const listint_t *node;
size_t i = 0;

node = h;
while (node && node->n)
{
printf("%d\n", node->n);
node = node->next;
}
return (i);
}
