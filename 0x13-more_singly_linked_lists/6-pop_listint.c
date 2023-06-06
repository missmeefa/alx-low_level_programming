#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @hd: pointer to head of linked list
 *
 * Return: the data inside deleted elements,
 * or 0 if linked list is empty
 */
int pop_listint(listint_t **hd)
{
listint_t *temp;
int count;

if (!hd || !*hd)
return (0);

count = (*hd)->n;
temp = (*hd)->next;
free(*hd);
*hd = temp;

return (count);
}
