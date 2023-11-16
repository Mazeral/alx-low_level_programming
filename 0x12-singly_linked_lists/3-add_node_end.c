#include "lists.h"

/**
 * add_node_end - adds nodes to the end
 * @head: the head of the linked list
 * @str: The value
 * Retrun: The address of the head
 */


list_t *add_node_end(list_t **head, const char *str)
{
list_t node = malloc(sizeof(list_t));
int len = 0;

while (str[len])
len++;

node->malloc(strlen(str));
if (node == NULL)
return (NULL);
strcpy(node->str, str);
node->len = len;
head->next = node;
node->next = NULL;
return (node);
}
