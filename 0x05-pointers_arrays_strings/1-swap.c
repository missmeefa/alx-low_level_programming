#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @x: integer to swap
 * @y: integer to swap
 */
void swap_int(int *x, int *y)
{
	int m;

	m = *x;
	*x = *y;
	*y = m;
}
