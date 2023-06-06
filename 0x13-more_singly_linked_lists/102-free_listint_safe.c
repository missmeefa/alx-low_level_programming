#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @hd: pointer to the head of a linked list
 *
 * Return: count of elements in the freed list
 */
size_t free_listint_safe(listint_t **hd)
{
size_t len = 0;
int diff;
listint_t *tp;

if (!hd || !*hd)
return (0);

while (*hd)
{
diff = *hd - (*hd)->next;
if (diff > 0)
{
tp = (*hd)->next;
free(*hd);
*hd = tp;
len++;
}
else
{
free(*hd);
*hd = NULL;
len++;
break;
}
}

*hd = NULL;

return (len);
}
