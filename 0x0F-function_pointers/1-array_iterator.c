#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a newl
 * @arr: array
 * @sz: how many elem to print
 * @act: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *arr, size_t sz, void (*act)(int))
{
	unsigned int i;

	if (arr == NULL || act == NULL)
		return;

	for (i = 0; i < sz; i++)
	{
		act(arr[i]);
	}
}
