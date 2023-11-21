#include "lists.h"

/**
 * add_nodeint - addes a node at the beginning of the linked list
 * @head: The head of the linked list
 * @n: The data in the new node
 * Return: NULL if failed, the address of the new element if success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t*));
newNode->n = n;
newNode->next = NULL;

if ((*head)->next)
{
newNode->next = malloc(sizeof(listint_t));
newNode->next = (*head)->next;
(*head)->next = newNode;
}
(*head)->next = newNode;
return ((*head)->next);
}
