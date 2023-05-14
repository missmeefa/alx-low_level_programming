#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @x: starting address of memory to be filled
 * @y: the desired value
 * @z: number of bytes to be changed
 *
 * Return: changed array with new value for z bytes
 */
char *_memset(char *x, char y, unsigned int z)
{
	int i = 0;

	for (; z > 0; i++)
	{
		x[i] = y;
		z--;
	}
	return (x);
}
