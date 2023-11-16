#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: The head of the linked lists
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
int i = 0;
/*
 * Creating a pointer that goes though all the elements*/
list_t *current = &h;
/*
 * Atleast, there WILL be one NODE in the list
 */
do
{
if (current->str != NULL)
printf("%s%d", current->str, current->len);
else
printf("(nil), %d", current->len);
current = current->next;
i++;
} while (current->next != NULL)
return (i);
}
