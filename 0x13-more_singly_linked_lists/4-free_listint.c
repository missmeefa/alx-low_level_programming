#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: list head
 *
 * Return: void
 */
void free_listint(listint_t *hd)
{
listint_t *temp;

while (hd)
{
temp = hd->next;
free(hd);
hd = temp;
}
}
