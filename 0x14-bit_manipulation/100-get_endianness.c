#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big endian, 1 for small edinan
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *u = (char *) &a;

	return (*u);
}
