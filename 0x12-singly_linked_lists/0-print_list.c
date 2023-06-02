#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @z: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *z)
{
 size_t i = 0;

 while (z)
 {
 if (!z->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", z->len, z->str);
 z = z->next;
 i++;
 }

 return (i);
}
