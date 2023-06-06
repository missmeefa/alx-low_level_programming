#include "lists.h"

/**
 * add_nodeint - at the beginning of a linked list, adds a new node
 * @hd: points to the first node on the list
 * @n: data that inputs in a new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **hd, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = *hd;
	}
	else
		return (NULL);
	if (*hd != NULL)
		new_node->next = *hd;
	*hd = new_node;
	return(new_node);
}
