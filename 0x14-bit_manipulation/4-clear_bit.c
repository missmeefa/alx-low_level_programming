#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0 
 * @u: pointer to the number to change
 * @inx: index of the bit to clear
 *
 * Return: 1 for true, -1 for error
 */
int clear_bit(unsigned long int *u, unsigned int inx)
{
	if (inx > 63)
		return (-1);

	*u = (~(1UL << inx) & *u);
	return (1);
}
