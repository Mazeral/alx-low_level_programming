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
if (node == NULL)
{
free (node);
return (NULL);
}
while (str[len])
len++;
node->str = malloc(sizeof(str));
if (node->str == NULL)
{
free(node);
}
strcpy(node->str, str);
node->len = len;
if (node->str == NULL)
{
free(node);
}
node->next = (*head);
if (node)
(*head) = node;
else
return (NULL);
return ((*head));
}
