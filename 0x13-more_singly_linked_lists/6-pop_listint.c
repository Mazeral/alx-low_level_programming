#include "lists.h"

/**
 * pop_listint - deleted head and returns the data in it
 * @head: The head of the linked list
 * Return: The contents of the node
 */

int pop_listint(listint_t **head)
{
listint_t *content;
int n;

if (head == NULL || *head == NULL)
return (0);
content = *head;
*head = content->next;
n = content->n;
free(content);
return (n);
}
