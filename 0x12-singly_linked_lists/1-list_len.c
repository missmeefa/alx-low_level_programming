#include <stdlib.h>
#include "lists.h"

/**
 * list_len - lists the number of elements in a linked list
 * @u: pointer to the list_t list
 *
 * Return: number of elements in u
 */
size_t list_len(const list_t *u)
{
	size_t n = 0;

	while (u)
	{
		n++;
		u = u->next;
	}
	return (n);
}
