#include "lists.h"
/**
 * add_node - adds a node to the beginning of the linked list
 * @head: The head of the linked list
 * @str: The value of in the lnked list
 * Return: A linked list node
 */



list_t *add_node(list_t **head, const char *str)
{
if (str == NULL)
{
printf("[0] (nil)\n");
}

list_t *next = malloc(sizeof(list_t));
next->str = strdup(str);
next->len = strlen(str);

(*head)->next = next;
printf("[%u] %s"\n, next->len, next->str);
return (next);
}
