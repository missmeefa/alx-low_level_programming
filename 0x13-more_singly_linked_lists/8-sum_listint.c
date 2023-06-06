#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a linked list
 * @hd: pointer to first node in the linked list
 *
 * Return: resulting sum or 0 when the list is empty
 */
int sum_listint(listint_t *hd)
{
int sum = 0;
listint_t *temp = hd;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
