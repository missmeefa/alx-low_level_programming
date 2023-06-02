#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @hd: list_t list to be freed
 */
void free_list(list_t *hd)
{
	list_t *temp;

	while (hd)
	{
		temp = hd->next;
		free(hd->str);
		free(hd);
		hd = temp;
	}
}
