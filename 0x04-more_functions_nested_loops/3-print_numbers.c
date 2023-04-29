#include "main.h"

/**
 * print_numbers - print the numbers 0 through 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int f;

	for (f = 0; f <= 9; f++)
	{
		_putchar(f + '0');
	}
	_putchar('\n');
}
