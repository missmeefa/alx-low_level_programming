#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - print name using pointer to function
 * @names: string to add
 * @x: pointer to function
 * Return: nothing
 **/
void print_name(char *names, void (*x)(char *))
{
	if (names == NULL || x == NULL)
		return;

	x(names);
}
