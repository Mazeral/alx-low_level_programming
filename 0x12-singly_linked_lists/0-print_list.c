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
do {
if (current->str != NULL)
printf("[%ul] %s\n", current->len, current->str);
else
printf("[0] (nil)\n");
current = current->next;
i++;
} while (current->next != NULL)
return (i);
}
