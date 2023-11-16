#include "lists.h"

/**
 * add_node_end - adds nodes to the end
 * @head: the head of the linked list
 * @str: The value
 * Return: The address of the head
 */


list_t *add_node_end(list_t **head, const char *str)
{
list_t *bgn = *head;
list_t *node = malloc(sizeof(list_t));
int len = 0;

if (str == NULL)
return (NULL);
while (str[len])
len++;

node->str = malloc(sizeof(str));
strcpy(node->str, str);
node->len = len;
node->next = NULL;

if (node == NULL)
return (NULL);

if (bgn == NULL)
{
*head = node;
return (node);
}

while (bgn->next)
bgn = bgn->next;

bgn->next = node;

return (node);
}
