#include "lists.h"

/**
 * sum_listint - Sums all the data in the linked liste
 * @head: the head of the linked list
 * Return: the sum of the data in the linked list
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
if (!head)
return (sum);

while (current)
{
sum += current->n;
current = current->next;
}
return (sum);
}
