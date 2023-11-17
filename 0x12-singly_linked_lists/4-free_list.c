#include "lists.h"

/**
 * free_list - frees the lists from the memory
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_list(list_t *head)
{
list_t *tmp2 = NULL;
while (head != NULL)
{
tmp2 = head->next;
free(head->str);
free(head);
head = tmp2;
}
}
