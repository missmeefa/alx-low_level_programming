
#include "main.h"

/**
 * print_binary - prints a number in binary
 * @u: number to print in binary
 */
void print_binary(unsigned long int u)
{
	int i, num = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = u >> i;

		if (current & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
