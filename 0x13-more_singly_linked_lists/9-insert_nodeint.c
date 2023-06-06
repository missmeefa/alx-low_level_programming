#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node in a linked list,
 * at a given position
 * @hd: pointer to the first node in the list
 * @indx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if func fails
 */
listint_t *insert_nodeint_at_index(listint_t **hd, unsigned int indx, int n)
{
unsigned int i;
listint_t *new_node;
listint_t *temp = *hd;

new_node = malloc(sizeof(listint_t));
if (!new_node || !hd)
return (NULL);

new_node->n = n;
new_node->next = NULL;

if (indx == 0)
{
new_node->next = *hd;
*hd = new_node;
return (new_node);
}

for (i = 0; temp && i < indx; i++)
{
if (i == indx - 1)
{
new_node->next = temp->next;
temp->next = new_node;
return (new_node);
}
else
temp = temp->next;
}

return (NULL);
}

