#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *hd);
size_t print_listint_safe(const listint_t *hd);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @hd: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *hd)
{
const listint_t *tree, *branch;
size_t nodes = 1;

if (hd == NULL || hd->next == NULL)
return (0);

tree = hd->next;
branch = (hd->next)->next;

while (branch)
{
if (tree == branch)
{
tree = hd;
while (tree != branch)
{
nodes++;
tree = tree->next;
branch = branch->next;
}

tree = tree->next;
while (tree != branch)
{
nodes++;
tree = tree->next;
}

return (nodes);
}

tree = tree->next;
branch = (branch->next)->next;
}

return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t nodes, index = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
