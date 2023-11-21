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
if (!head)
return (NULL);

newNode->n = n;
newNode->next = NULL;

/* Check if the head has already an element, if it does, make it 
 * newNode next element and change it's next value to null*/
if ((*head)->next)
{
newNode->next = (*head)->next;
(*head)->next = newNode;
}
(*head)->next = newNode;
return (newNode);
}
