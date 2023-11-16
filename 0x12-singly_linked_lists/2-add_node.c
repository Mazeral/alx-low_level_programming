#include "lists.h"
/**
 * add_node - adds a node to the beginning of the linked list
 * @head: The head of the linked list
 * @str: The value of in the lnked list
 * Return: A linked list node
 */



list_t *add_node(list_t **head, const char *str)
{
int len = 0;
list_t *node = malloc(sizeof(list_t));
while (str[len])
len++;
node->str = malloc(sizeof(str));
strcpy(node->str, str);
node->len = len;
node->next = (*head);
if (node)
(*head) = node;
else
return (NULL);
return ((*head));
}
