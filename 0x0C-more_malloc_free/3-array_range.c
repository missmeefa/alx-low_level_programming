#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @a: minimum range of values stored
 * @b: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int a, int b)
{
	int *ptr;
	int i, size;

	if (a > b)
		return (NULL);

	size = b - a + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; a <= b; i++)
		ptr[i] = a++;

	return (ptr);
}
