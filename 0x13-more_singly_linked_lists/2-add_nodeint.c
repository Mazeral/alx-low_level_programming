#include "lists.h"

/**
 * add_nodeint - addes a node at the beginning of the linked list
 * @head: The head of the linked list
 * @n: The data in the new node
 * Return: NULL if failed, the address of the new element if success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
if (!head)
return (NULL);

newNode->n = n;
newNode->next = NULL;

(*head)->next = newNode;
return (newNode);
}
