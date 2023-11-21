#include "lists.h"

/**
 * add_nodeint - addes a node at the beginning of the linked list
 * @head: The head of the linked list
 * @n: The data in the new node
 * Return: NULL if failed, the address of the new element if success
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));
if (!newNode)
return (NULL);
newNode->n = n;
newNode->next = *head;
*head = newNode
return (newNode);
}
