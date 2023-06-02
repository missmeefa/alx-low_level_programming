#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @hd: double pointer to the list_t list
 * @st: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **hd, const char *st)
{
	list_t *new;
	unsigned int len = 0;

	while (st[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(st);
	new->len = len;
	new->next = (*hd);
	(*hd) = new;

	return (*hd);
}
