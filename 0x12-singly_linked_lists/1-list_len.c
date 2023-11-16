#include "lists.h"

/**
 * list_len - calculates the length of the linked list
 * @h: A pointer to the first linked list
 * Return: The length or 0
 */

size_t list_len(const list_t *h)
{
unsigned int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
