#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: The head of the linked lists
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
int i = 0;
list_t *current = &h;
while (current)
{
if (current->str != NULL)
printf("[%u] %s\n", current->len, current->str);
else
printf("[0] (nil)\n");
current = current->next;
i++;
}
return (i);
}
