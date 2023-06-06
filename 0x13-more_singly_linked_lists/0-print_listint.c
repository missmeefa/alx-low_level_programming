#include "lists.h"

/**
* print_listint - Prints content of a linked list
* @x: type of linked listint_t to print
*
* Return: count of nodes
*/
size_t print_listint(const listint_t *x)
{
size_t count = 0;

while (x)
{
printf("%d\n", x->n);
count++;
x = x->next;
}

return (count);
}
