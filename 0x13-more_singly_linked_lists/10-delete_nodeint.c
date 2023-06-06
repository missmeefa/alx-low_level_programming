#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node by given index
 * @hd: pointer to the head of list
 * @inx: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **hd, unsigned int inx)
{
listint_t *tp = *hd;
listint_t *current = NULL;
unsigned int i = 0;

if (*hd == NULL)
return (-1);

if (inx == 0)
{
*hd = (*hd)->next;
free(tp);
return (1);
}

while (i < inx - 1)
{
if (!tp || !(tp->next))
return (-1);
tp = tp->next;
i++;
}


current = tp->next;
tp->next = current->next;
free(current);

return (1);
}
