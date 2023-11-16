#include "lists.h"

/**
 * free_list - frees the lists from the memory
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_list(list_t *head)
{
list_t tmp1 = head->next, tmp2;
if (head)
while (tmp1->next)
{
tmp2 = tmp1->next;
free(tmp1);
tmp1 = tmp2;
}
else
free(head);
free(tmp2);
}
