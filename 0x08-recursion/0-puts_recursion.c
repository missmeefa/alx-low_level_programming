#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @x: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *x)
{
	if (*x)
	{
		_putchar(*x);
		_puts_recursion(x + 1);
	}

	else
		_putchar('\n');
}
