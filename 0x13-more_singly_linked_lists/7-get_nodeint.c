#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a certain index in a linked list
 * @hd: points to the head node in the linked list
 * @inx: index of the node to return
 *
 * Return: points to the node we're looking for, NULL - when node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *hd, unsigned int inx)
{
unsigned int i = 0;
listint_t *temp = hd;

while (temp && i < inx)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
