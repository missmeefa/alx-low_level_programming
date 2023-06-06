#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @hd: pointer to the head of linked list
 *
 * Return: address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *hd)
{
listint_t *big = hd;
listint_t *small = hd;

if (!hd)
return (NULL);

while (big && small && big->next)
{
big = big->next->next;
small = small->next;
if (big == small)
{
small = hd;
while (small != big)
{
small = small->next;
big = big->next;
}
return (big);
}
}

return (NULL);
}
