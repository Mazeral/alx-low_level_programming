#include<lists.h>

/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: The head of the linked list
 * @n: the int in the node
 * Return: NULL if failed, the address if success
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
if (!head)
return (NULL)

listint_t **node = head;
listint_t *endNode;
endNode->n = n;
endNode->next = NULL;
while ((*node)->next)
node = (*node)->next;

(*node)->next = endNode;

return (&endNode);
}

