#include "lists.h"

/**
 * add_nodeint_end - at the end of a linked list adds a node
 * @hd: pointer to the first element in the list
 * @n: content to insert in the new element
 *
 * Return: count to be used as content
 */
listint_t *add_nodeint_end(listint_t **hd, const int n)
{
listint_t *new_node;
listint_t *temp = *hd;

new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (*hd == NULL)
{
*hd = new_node;
return (new_node);
}

while (temp->next)
temp = temp->next;

temp->next = new_node;

return (new_node);
}
