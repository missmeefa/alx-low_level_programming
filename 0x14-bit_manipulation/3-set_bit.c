#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @z: pointer to the number to change
 * @inx: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *z, unsigned int inx)
{
	if (inx > 63)
		return (-1);

	*z = ((1UL << inx) | *z);
	return (1);
}
