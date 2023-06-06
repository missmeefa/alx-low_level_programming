#include "lists.h"

/**
 * listint_len - returns the count of elements in a linked lists
 * @z: linked list of type listint_t to traverse
 *
 * Return: count of nodes
 */
size_t listint_len(const listint_t *z)
{
size_t count = 0;

while (z)
{
count++;
z = z->next;
}

return (count);
}
