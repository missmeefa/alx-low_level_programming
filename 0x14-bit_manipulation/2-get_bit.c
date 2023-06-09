#include "main.h"

/**
 * get_bit - sets the value of a bit to 1 at a given index
 * @u: number to search
 * @inx: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int u, unsigned int inx)
{
	int bit_get;

	if (inx > 63)
		return (-1);

	bit_get = (u >> inx) & 1;

	return (bit_get);
}
