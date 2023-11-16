#include "lists.h"
/**
 * add_node - adds a node to the beginning of the linked list
 * @head: The head of the linked list
 * @str: The value of in the lnked list
 * Return: A linked list node
 */



list_t *add_node(list_t **head, const char *str)
{
list_t *next = malloc(sizeof(list_t));
next->str = malloc(sizeof(str));
strcpy(next->str, str);
next->len = strlen(str);

(*head) = next
return (head);
}
