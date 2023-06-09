#include "main.h"

/**
 * flip_bits - number of bits to change
 * to move from one number to another
 * @x: first num
 * @y: second num
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int i, num = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			num++;
	}

	return (num);
}
