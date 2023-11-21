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
int i = 0;

while (h)
{
printf("%d", h->n);
h = h->next;
}
return (i);
}
