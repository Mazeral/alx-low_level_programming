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
if (!node || str == NULL)
{
free (node);
return (NULL);
}
while (str[len])
len++;
node->str = strdup(str);
node->len = len;
if (!(node->str = strdup(str)))
{
free(node->str);
free(node);
}
node->next = (*head);
if (node)
(*head) = node;
else
return (NULL);
return ((*head));
}
