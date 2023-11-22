#include "lists.h"

/**
 * reverse_listint - a a function which reverse the linked list
 * @head: The head of the linked list
 * Return: the head of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous = NULL;
listint_t *current = NULL;
listint_t *next = NULL;

current = *head;

while (current->next != NULL)
{
next = current->next;
current->next = previous;
previous = current;
current = next;
}
return (current);
}
