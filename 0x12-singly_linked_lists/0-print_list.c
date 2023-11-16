#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: The head of the linked lists
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
int i = 0;
list_s current = h;
while (h->next != NULL)
{
current = h->next;
i++;
}
return (i);
}
