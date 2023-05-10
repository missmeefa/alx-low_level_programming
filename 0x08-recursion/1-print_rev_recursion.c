#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @u: The string to be printed.
 */
void _print_rev_recursion(char *u)
{
	if (*u)
	{
		_print_rev_recursion(u + 1);
		_putchar(*u);
	}
}
