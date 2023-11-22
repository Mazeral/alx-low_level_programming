#include "lists.h"

/**
 * print_listint_safe - prints the contents of the linked list
 * @head: The head of the linked list
 * Return: The length of the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
listint_t *h = head;
/* [0x1b500f0] 1024 */
size_t i = 0;
while (head)
{
printf("[%p] %d\n",h, h->n);
h = h->next;
i++;
}
return (i);
}
