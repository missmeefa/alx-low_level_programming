#include "lists.h"

/**
 * free_listint2 - free the linked list
 * @hd: pointer of list
 * Return: void
 */
void free_listint2(listint_t **hd)
{
listint_t *temp;

if (hd == NULL)
return;

while (*hd)
{
temp = (*hd)->next;
free(*hd);
*hd = temp;
}

*hd = NULL;
}
