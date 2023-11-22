#include "lists.h"

/**
 * free_listint - frees the linked list nodes from the memory
 * @head: The head of the linked list
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head)
{
tmp = head->next;
free(head);
head = tmp;
}

}
